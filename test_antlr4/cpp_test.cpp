#include <iostream>
#include <sys/time.h>
#include <string>
#include <map>

#include <antlr4-runtime.h>
#include <ParseTreeWalker.h>

#include "sqliLexer.h"
#include "sqliParser.h"
#include "sqliParserBaseListener.h"

using namespace antlr4;
using namespace std;

string kArray[] = { "--", "@@", "/*", "*/", "#",\
				    "select", "union", "order by", "group by","information_schema",\
					"column_name", "table_name", "schema_name", "schemata","user_privileges",\
					"schema_privileges", "table_privileges","column_privileges","load_file",\
					"updatexml","extractvalue","current_user","system_user","session_user","concat",\
					"CONCAT_WS","group_concat","benchmark" };

map<string, int> keywords;
int score = 0;

void init_keywords()
{
	int i = 0;
	int cnt = 0;

	cnt = sizeof(kArray)/sizeof(kArray[0]);
	keywords.clear();
	for( ; i < cnt; i++)
	{
		keywords.insert(pair<string, int>(kArray[i], 5));
	}
}

int main(int argc, char *argv[])
{
	struct timeval t1;
	struct timeval t2;

	init_keywords();

	//while(1)
	{
#ifdef TEST_TIME
	gettimeofday(&t1, NULL);
#endif
	score = 0;
	ANTLRInputStream *input = new ANTLRInputStream(u8"select a from b where '123' and '1' = '1';");
	sqliLexer *lexer = new sqliLexer(input);
	CommonTokenStream *tokens = new CommonTokenStream(lexer);

	sqliParser *parser = new sqliParser(tokens);
	sqliParserBaseListener *listener = new sqliParserBaseListener();
	parser->addParseListener(listener);
#ifdef TEST_TIME
	gettimeofday(&t2, NULL);
	cout << "Create lexer and parser time consumed " << (t2.tv_sec-t1.tv_sec)*1000000+(t2.tv_usec-t1.tv_usec) << "us" << endl;
#endif

#ifdef TEST_TIME
	gettimeofday(&t1, NULL);
#endif
	tree::ParseTree *tree = (tree::ParseTree*)parser->root_statement();
#ifdef TEST_TIME
	gettimeofday(&t2, NULL);
	cout << "Parser time consumed " << (t2.tv_sec-t1.tv_sec)*1000000+(t2.tv_usec-t1.tv_usec) << "us" << endl;
#endif
	//cout << "Score: " << score << endl;

	delete input;
	delete lexer;
	delete tokens;
	delete parser;
	delete listener;
	}

#ifdef DEBUG
	std::cout << tree->toStringTree(parser) << std::endl << std::endl;
	tree::ParseTreeWalker *walker = new tree::ParseTreeWalker();
	walker->walk(listener, tree);
	delete walker;
#endif


	return 0;
}

