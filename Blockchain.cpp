// Blockchain.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Block.cpp"

/*
*Simple BlockChain Implementation
*/


int main()
{
	std::vector<char*> genesis_T;
	genesis_T.push_back("Initialize ex: 21 BTC");
	Block* genesisBlock = new Block(NULL, genesis_T);

	std::vector<char*> block2_T;
	block2_T.push_back("Send 10 BTC");
	Block* block2 = new Block(genesisBlock->getBlockHash(), block2_T);

	std::vector<char*> block3_T;
	block3_T.push_back("Send 20 BTC");
	Block* block3 = new Block(block2->getBlockHash(), block3_T);

	std::cout << genesisBlock->getBlockHash() << std::endl;
	std::cout << block2->getBlockHash() << std::endl;
	std::cout << block3->getBlockHash() << std::endl;

    return 0;
}

