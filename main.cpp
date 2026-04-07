#include <iostream>
#include <cstdint>

#include <my-lib/bit.h>

using BitSet = Mylib::BitSet<32>;

int main (int argc, char **argv)
{
	BitSet bits;

	bits = 127;
	std::cout << bits << std::endl;

	// primeiro parâmetro é o bit inicial
	// segundo parâmetro é a quantidade de bits a partir do bit inicial
	// terceiro parâmetro é o valor a ser atribuído aos bits selecionados
	bits.set(1, 2, 0);
	std::cout << bits << std::endl;

	// primeiro parâmetro é o bit inicial
	// segundo parâmetro é a quantidade de bits a partir do bit inicial
	uint32_t most_sig = bits.get(31, 1);
	std::cout << "Most significant bit: " << most_sig << std::endl;

	bits.set(31, 1, 1);
	std::cout << bits << std::endl;

	most_sig = bits.get(31, 1);
	std::cout << "Most significant bit: " << most_sig << std::endl;

	bits.set(31, 1, bits.get(1, 1));
	std::cout << bits << std::endl;

	return 0;
}