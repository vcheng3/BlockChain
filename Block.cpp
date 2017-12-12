#include "Block.h"


Block::Block(int previousHash, std::vector<char*> transactions)
	: previousHash(previousHash), transactions(transactions) {

}

int Block::getPreviousHash() {
	return previousHash;
}

std::vector<char*> Block::getTransaction() {
	return transactions;
}

int32_t Block::getBlockHash() {
	return blockHash;
}