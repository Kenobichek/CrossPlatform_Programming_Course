#include <iostream>
#include <vector>
#include <cstdint>
#include <iomanip>
#include <boost/endian.hpp>

uint32_t endian(uint32_t num) {
	return ((num & 0xFF) << 24) | ((num & 0xFF00) << 8) |
		((num & 0xFF0000) >> 8) | ((num & 0xFF000000) >> 24);
}

int main() {
	std::vector<uint32_t> numbers = {0x12345678, 0xabcdef, 0xdeadbeef, 0x87654321, 0xfaceb00c,
									0x11111111, 0x22222222, 0x33333333, 0x44444444, 0x55555555};

	std::cout << std::setw(10) << "Number" << std::setw(15) << "My Endian" << std::setw(15) << "Boost" << std::endl;
	std::cout << std::setw(40) << std::setfill('-') << "" << std::setfill(' ') << std::endl;

	for (auto& num : numbers) {
		std::cout << std::setw(10) << std::hex << num << std::setw(15) << endian(num) << std::setw(15) << boost::endian::endian_reverse(num) << std::endl;
		num = endian(num);
	}

	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::setw(10) << "Number" << std::setw(15) << "My Endian" << std::setw(15) << "Boost" << std::endl;
	std::cout << std::setw(40) << std::setfill('-') << "" << std::setfill(' ') << std::endl;

	for (auto& num : numbers) {
		std::cout << std::setw(10) << std::hex << num << std::setw(15) << endian(num) << std::setw(15) << boost::endian::endian_reverse(num) << std::endl;
		num = endian(num);
	}

	return 0;
}
