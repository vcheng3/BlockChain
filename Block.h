#pragma once

#include <iostream>
#include <vector>
#include <functional>
#include <string>

struct Block {

private:
	int previousHash;
	std::vector<char*> transactions;
	int32_t blockHash;

public:
	Block(int,std::vector<char*>);
	int getPreviousHash();
	std::vector<char* > getTransaction();
	int32_t getBlockHash();
		
};