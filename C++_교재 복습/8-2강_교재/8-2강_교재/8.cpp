#include <iostream>
#include <iomanip>
#include <array>
using namespace std;
int main(void)
{
	const size_t responseSize{ 20 };
	const size_t frequencySize{ 6 };

	const array<unsigned int, responseSize> response{
		1,2,5,4,3,5,2,1,3,1,4,3,3,3,2,3,3,2,2,5
	};
	array<unsigned int, frequencySize> frequency{};

	for (size_t answer{ 0 }; answer < response.size(); ++answer) {
		++frequency[response[answer]];
	}

	cout << "Rating" << setw(12) << "Frequency" << endl;
	for (size_t rating{ 1 }; rating < frequency.size(); ++rating)
		cout << setw(6) << rating << setw(12) << frequency[rating] << endl;
}