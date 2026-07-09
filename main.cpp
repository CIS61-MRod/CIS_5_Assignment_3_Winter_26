#include <iostream>
#include <iomanip>

using std::cout;
using std::endl;

int main() {
	const int Size = 30;
	int scores[Size] = { 78, 92, 65, 88, 45, 100, 72, 81, 59, 96,
		84, 67, 91, 53, 77, 89, 62, 98, 74, 85,
		48, 93, 70, 82, 66, 95, 55, 87, 79, 64 };

	const int numStudents = 30;

	int sum = 0;
	int passing = 0;
	int highest = scores[0];
	int lowest = scores[0];
	int gradeA = 0;

	for (int i = 0; i < Size; ++i) {
		sum += scores[i];
		if (scores[i] >= 60) {
			passing++;
		}
		if (scores[i] > highest) {
			highest = scores[i];
		}
		if (scores[i] < lowest) {
			lowest = scores[i];
		}
		if (scores[i] >= 90) {
			gradeA++;
		}
	}

	double average = static_cast<double>(sum) / Size;

	cout << "Number of students: " << numStudents << endl;
	cout << "Average score: " << std::fixed << std::setprecision(2) << average << endl;
	cout << "Highest score: " << highest << endl;
	cout << "Lowest score: " << lowest << endl;
	cout << "Students passed: " << passing << endl;
	cout << "Students with A: " << gradeA << endl;

	cout << "Scores in original order: " << endl;
	for (int i = 0; i < Size; i++) {
		cout << scores[i] << " ";
	}

	cout << "Scores in reverse order: " << endl;
	for (int i = Size - 1; i >= 0; i--) {
		cout << scores[i] << " ";
	}

		return 0;
}