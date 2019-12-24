


// Generated from sqliParser.g4 by ANTLR 4.7.2


#include "sqliParserBaseListener.h"

using namespace std;

extern map<string, int> keywords;
extern int score;

void sqliParserBaseListener::visitTerminal(antlr4::tree::TerminalNode *node)
{
	//cout << "Leaf node: " << node->getSymbol()->getText() << endl;
	map<string, int>::iterator iter;
	string text = node->getSymbol()->getText();
	if( (iter = keywords.find(text)) != keywords.end()  )
	{
		//cout << "Found keyword: " << text << endl;
		score += iter->second;
	}
}


