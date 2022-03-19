#include <string>
#include <vector>
#include <map>

class CodingExercise
{
public:
	std::map<std::string, int> aboveBelow(std::vector<int> numbers, int comparison)
	{
		int above = 0;
		int below = 0;

		// Compares ints in our numbers vector to our comparison value
		for (int i = 0; i < numbers.size(); ++i)
		{
			if (comparison < numbers[i])
				above++;
			else if (comparison > numbers[i])
				below++;
		}

		// Map to be populated with above and below value
		std::map<std::string, int> myMap;

		myMap.insert(std::pair<std::string, int>("above", above));
		myMap.insert(std::pair<std::string, int>("below", below));

		return myMap;
	}

	std::string stringRotation(std::string word, int rotValue)
	{
		std::string rotString = word;
		std::string temp = word;

		// Rotates the string rotValue to the right
		int t = rotString.length();
		for (int i = rotString.length() - rotValue; i >= 0; --i)
		{
			rotString[t] = rotString[i];
			t--;
		}

		// Replaces the beginning of the string with the final rotValue characters in the string
		t = temp.length() - rotValue;
		for (int i = 0; i < rotValue; ++i)
		{
			rotString[i] = temp[t];
			t++;
		}

		return rotString;
	}
};