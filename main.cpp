#include <iostream>
using namespace std;

void SomeFunc(int number, char suit)
{
	switch (number)
	{
	case 1:
		switch (suit)
		{
		case 'h':
			cout << char(218) << char(196) << char(196) <<
			char(196) << char(196) << char(196)
			<< char(196) << char(196) << char(191)
			<< "\n" << char(179) << "A\t" << char(179)
			<< "\n" << char(179) << char(003) << "\t" << char(179)
			<< "\n" << char(179) << "\t" << char(179)
			<< "\n" << char(179) << "\t" << char(179)
			<< "\n" << char(179) << "      A" << char(179)
			<< "\n" << char(179) << "      " << char(003) << char(179)
			<< "\n" << char(192) << char(196)
			<< char(196) << char(196) << char(196) <<
			char(196) << char(196) << char(196)
			<< char(217);
			break;
		case 'd':
			cout << char(218) << char(196) << char(196) <<
				char(196) << char(196) << char(196)
				<< char(196) << char(196) << char(191)
				<< "\n" << char(179) << "A\t" << char(179)
				<< "\n" << char(179) << char(004) << "\t" << char(179)
				<< "\n" << char(179) << "\t" << char(179)
				<< "\n" << char(179) << "\t" << char(179)
				<< "\n" << char(179) << "      A" << char(179)
				<< "\n" << char(179) << "      " << char(004) << char(179)
				<< "\n" << char(192) << char(196)
				<< char(196) << char(196) << char(196) <<
				char(196) << char(196) << char(196)
				<< char(217);
			break;
		case 'c':
			cout << char(218) << char(196) << char(196) <<
				char(196) << char(196) << char(196)
				<< char(196) << char(196) << char(191)
				<< "\n" << char(179) << "A\t" << char(179)
				<< "\n" << char(179) << char(005) << "\t" << char(179)
				<< "\n" << char(179) << "\t" << char(179)
				<< "\n" << char(179) << "\t" << char(179)
				<< "\n" << char(179) << "      A" << char(179)
				<< "\n" << char(179) << "      " << char(005) << char(179)
				<< "\n" << char(192) << char(196)
				<< char(196) << char(196) << char(196) <<
				char(196) << char(196) << char(196)
				<< char(217);
			break;
		case 's':
			cout << char(218) << char(196) << char(196) <<
				char(196) << char(196) << char(196)
				<< char(196) << char(196) << char(191)
				<< "\n" << char(179) << "A\t" << char(179)
				<< "\n" << char(179) << char(006) << "\t" << char(179)
				<< "\n" << char(179) << "\t" << char(179)
				<< "\n" << char(179) << "\t" << char(179)
				<< "\n" << char(179) << "      A" << char(179)
				<< "\n" << char(179) << "      " << char(006) << char(179)
				<< "\n" << char(192) << char(196)
				<< char(196) << char(196) << char(196) <<
				char(196) << char(196) << char(196)
				<< char(217);
			break;
		default:
			cout << "Invalid value. Please, try again.";
			break;
		}
		break;
	case 2:
		switch (suit)
		{
		case 'h':
			cout << char(218) << char(196) << char(196) <<
				char(196) << char(196) << char(196)
				<< char(196) << char(196) << char(191)
				<< "\n" << char(179) << "2\t" << char(179)
				<< "\n" << char(179) << char(003) << "\t" << char(179)
				<< "\n" << char(179) << "\t" << char(179)
				<< "\n" << char(179) << "\t" << char(179)
				<< "\n" << char(179) << "      2" << char(179)
				<< "\n" << char(179) << "      " << char(003) << char(179)
				<< "\n" << char(192) << char(196)
				<< char(196) << char(196) << char(196) <<
				char(196) << char(196) << char(196)
				<< char(217);
			break;
		case 'd':
			cout << char(218) << char(196) << char(196) <<
				char(196) << char(196) << char(196)
				<< char(196) << char(196) << char(191)
				<< "\n" << char(179) << "2\t" << char(179)
				<< "\n" << char(179) << char(004) << "\t" << char(179)
				<< "\n" << char(179) << "\t" << char(179)
				<< "\n" << char(179) << "\t" << char(179)
				<< "\n" << char(179) << "      2" << char(179)
				<< "\n" << char(179) << "      " << char(004) << char(179)
				<< "\n" << char(192) << char(196)
				<< char(196) << char(196) << char(196) <<
				char(196) << char(196) << char(196)
				<< char(217);
			break;
		case 'c':
			cout << char(218) << char(196) << char(196) <<
				char(196) << char(196) << char(196)
				<< char(196) << char(196) << char(191)
				<< "\n" << char(179) << "2\t" << char(179)
				<< "\n" << char(179) << char(005) << "\t" << char(179)
				<< "\n" << char(179) << "\t" << char(179)
				<< "\n" << char(179) << "\t" << char(179)
				<< "\n" << char(179) << "      2" << char(179)
				<< "\n" << char(179) << "      " << char(005) << char(179)
				<< "\n" << char(192) << char(196)
				<< char(196) << char(196) << char(196) <<
				char(196) << char(196) << char(196)
				<< char(217);
			break;
		case 's':
			cout << char(218) << char(196) << char(196) <<
				char(196) << char(196) << char(196)
				<< char(196) << char(196) << char(191)
				<< "\n" << char(179) << "2\t" << char(179)
				<< "\n" << char(179) << char(006) << "\t" << char(179)
				<< "\n" << char(179) << "\t" << char(179)
				<< "\n" << char(179) << "\t" << char(179)
				<< "\n" << char(179) << "      2" << char(179)
				<< "\n" << char(179) << "      " << char(006) << char(179)
				<< "\n" << char(192) << char(196)
				<< char(196) << char(196) << char(196) <<
				char(196) << char(196) << char(196)
				<< char(217);
			break;
		default:
			cout << "Invalid value. Please, try again.";
			break;
		}
		break;
	case 3:
		switch (suit)
		{
		case 'h':
			cout << char(218) << char(196) << char(196) <<
				char(196) << char(196) << char(196)
				<< char(196) << char(196) << char(191)
				<< "\n" << char(179) << "3\t" << char(179)
				<< "\n" << char(179) << char(003) << "\t" << char(179)
				<< "\n" << char(179) << "\t" << char(179)
				<< "\n" << char(179) << "\t" << char(179)
				<< "\n" << char(179) << "      3" << char(179)
				<< "\n" << char(179) << "      " << char(003) << char(179)
				<< "\n" << char(192) << char(196)
				<< char(196) << char(196) << char(196) <<
				char(196) << char(196) << char(196)
				<< char(217);
			break;
		case 'd':
			cout << char(218) << char(196) << char(196) <<
				char(196) << char(196) << char(196)
				<< char(196) << char(196) << char(191)
				<< "\n" << char(179) << "3\t" << char(179)
				<< "\n" << char(179) << char(004) << "\t" << char(179)
				<< "\n" << char(179) << "\t" << char(179)
				<< "\n" << char(179) << "\t" << char(179)
				<< "\n" << char(179) << "      3" << char(179)
				<< "\n" << char(179) << "      " << char(004) << char(179)
				<< "\n" << char(192) << char(196)
				<< char(196) << char(196) << char(196) <<
				char(196) << char(196) << char(196)
				<< char(217);
			break;
		case 'c':
			cout << char(218) << char(196) << char(196) <<
				char(196) << char(196) << char(196)
				<< char(196) << char(196) << char(191)
				<< "\n" << char(179) << "3\t" << char(179)
				<< "\n" << char(179) << char(005) << "\t" << char(179)
				<< "\n" << char(179) << "\t" << char(179)
				<< "\n" << char(179) << "\t" << char(179)
				<< "\n" << char(179) << "      3" << char(179)
				<< "\n" << char(179) << "      " << char(005) << char(179)
				<< "\n" << char(192) << char(196)
				<< char(196) << char(196) << char(196) <<
				char(196) << char(196) << char(196)
				<< char(217);
			break;
		case 's':
			cout << char(218) << char(196) << char(196) <<
				char(196) << char(196) << char(196)
				<< char(196) << char(196) << char(191)
				<< "\n" << char(179) << "3\t" << char(179)
				<< "\n" << char(179) << char(006) << "\t" << char(179)
				<< "\n" << char(179) << "\t" << char(179)
				<< "\n" << char(179) << "\t" << char(179)
				<< "\n" << char(179) << "      3" << char(179)
				<< "\n" << char(179) << "      " << char(006) << char(179)
				<< "\n" << char(192) << char(196)
				<< char(196) << char(196) << char(196) <<
				char(196) << char(196) << char(196)
				<< char(217);
			break;
		default:
			cout << "Invalid value. Please, try again.";
			break;
		}
		break;
	case 4:
		switch (suit)
		{
		case 'h':
			cout << char(218) << char(196) << char(196) <<
				char(196) << char(196) << char(196)
				<< char(196) << char(196) << char(191)
				<< "\n" << char(179) << "4\t" << char(179)
				<< "\n" << char(179) << char(003) << "\t" << char(179)
				<< "\n" << char(179) << "\t" << char(179)
				<< "\n" << char(179) << "\t" << char(179)
				<< "\n" << char(179) << "      4" << char(179)
				<< "\n" << char(179) << "      " << char(003) << char(179)
				<< "\n" << char(192) << char(196)
				<< char(196) << char(196) << char(196) <<
				char(196) << char(196) << char(196)
				<< char(217);
			break;
		case 'd':
			cout << char(218) << char(196) << char(196) <<
				char(196) << char(196) << char(196)
				<< char(196) << char(196) << char(191)
				<< "\n" << char(179) << "4\t" << char(179)
				<< "\n" << char(179) << char(004) << "\t" << char(179)
				<< "\n" << char(179) << "\t" << char(179)
				<< "\n" << char(179) << "\t" << char(179)
				<< "\n" << char(179) << "      4" << char(179)
				<< "\n" << char(179) << "      " << char(004) << char(179)
				<< "\n" << char(192) << char(196)
				<< char(196) << char(196) << char(196) <<
				char(196) << char(196) << char(196)
				<< char(217);
			break;
		case 'c':
			cout << char(218) << char(196) << char(196) <<
				char(196) << char(196) << char(196)
				<< char(196) << char(196) << char(191)
				<< "\n" << char(179) << "4\t" << char(179)
				<< "\n" << char(179) << char(005) << "\t" << char(179)
				<< "\n" << char(179) << "\t" << char(179)
				<< "\n" << char(179) << "\t" << char(179)
				<< "\n" << char(179) << "      4" << char(179)
				<< "\n" << char(179) << "      " << char(005) << char(179)
				<< "\n" << char(192) << char(196)
				<< char(196) << char(196) << char(196) <<
				char(196) << char(196) << char(196)
				<< char(217);
			break;
		case 's':
			cout << char(218) << char(196) << char(196) <<
				char(196) << char(196) << char(196)
				<< char(196) << char(196) << char(191)
				<< "\n" << char(179) << "4\t" << char(179)
				<< "\n" << char(179) << char(006) << "\t" << char(179)
				<< "\n" << char(179) << "\t" << char(179)
				<< "\n" << char(179) << "\t" << char(179)
				<< "\n" << char(179) << "      4" << char(179)
				<< "\n" << char(179) << "      " << char(006) << char(179)
				<< "\n" << char(192) << char(196)
				<< char(196) << char(196) << char(196) <<
				char(196) << char(196) << char(196)
				<< char(217);
			break;
		default:
			cout << "Invalid value. Please, try again.";
			break;
		}
		break;
	case 5:
		switch (suit)
		{
		case 'h':
			cout << char(218) << char(196) << char(196) <<
				char(196) << char(196) << char(196)
				<< char(196) << char(196) << char(191)
				<< "\n" << char(179) << "5\t" << char(179)
				<< "\n" << char(179) << char(003) << "\t" << char(179)
				<< "\n" << char(179) << "\t" << char(179)
				<< "\n" << char(179) << "\t" << char(179)
				<< "\n" << char(179) << "      5" << char(179)
				<< "\n" << char(179) << "      " << char(003) << char(179)
				<< "\n" << char(192) << char(196)
				<< char(196) << char(196) << char(196) <<
				char(196) << char(196) << char(196)
				<< char(217);
			break;
		case 'd':
			cout << char(218) << char(196) << char(196) <<
				char(196) << char(196) << char(196)
				<< char(196) << char(196) << char(191)
				<< "\n" << char(179) << "5\t" << char(179)
				<< "\n" << char(179) << char(004) << "\t" << char(179)
				<< "\n" << char(179) << "\t" << char(179)
				<< "\n" << char(179) << "\t" << char(179)
				<< "\n" << char(179) << "      5" << char(179)
				<< "\n" << char(179) << "      " << char(004) << char(179)
				<< "\n" << char(192) << char(196)
				<< char(196) << char(196) << char(196) <<
				char(196) << char(196) << char(196)
				<< char(217);
			break;
		case 'c':
			cout << char(218) << char(196) << char(196) <<
				char(196) << char(196) << char(196)
				<< char(196) << char(196) << char(191)
				<< "\n" << char(179) << "5\t" << char(179)
				<< "\n" << char(179) << char(005) << "\t" << char(179)
				<< "\n" << char(179) << "\t" << char(179)
				<< "\n" << char(179) << "\t" << char(179)
				<< "\n" << char(179) << "      5" << char(179)
				<< "\n" << char(179) << "      " << char(005) << char(179)
				<< "\n" << char(192) << char(196)
				<< char(196) << char(196) << char(196) <<
				char(196) << char(196) << char(196)
				<< char(217);
			break;
		case 's':
			cout << char(218) << char(196) << char(196) <<
				char(196) << char(196) << char(196)
				<< char(196) << char(196) << char(191)
				<< "\n" << char(179) << "5\t" << char(179)
				<< "\n" << char(179) << char(006) << "\t" << char(179)
				<< "\n" << char(179) << "\t" << char(179)
				<< "\n" << char(179) << "\t" << char(179)
				<< "\n" << char(179) << "      5" << char(179)
				<< "\n" << char(179) << "      " << char(006) << char(179)
				<< "\n" << char(192) << char(196)
				<< char(196) << char(196) << char(196) <<
				char(196) << char(196) << char(196)
				<< char(217);
			break;
		default:
			cout << "Invalid value. Please, try again.";
			break;
		}
		break;
	case 6:
		switch (suit)
		{
		case 'h':
			cout << char(218) << char(196) << char(196) <<
				char(196) << char(196) << char(196)
				<< char(196) << char(196) << char(191)
				<< "\n" << char(179) << "6\t" << char(179)
				<< "\n" << char(179) << char(003) << "\t" << char(179)
				<< "\n" << char(179) << "\t" << char(179)
				<< "\n" << char(179) << "\t" << char(179)
				<< "\n" << char(179) << "      6" << char(179)
				<< "\n" << char(179) << "      " << char(003) << char(179)
				<< "\n" << char(192) << char(196)
				<< char(196) << char(196) << char(196) <<
				char(196) << char(196) << char(196)
				<< char(217);
			break;
		case 'd':
			cout << char(218) << char(196) << char(196) <<
				char(196) << char(196) << char(196)
				<< char(196) << char(196) << char(191)
				<< "\n" << char(179) << "6\t" << char(179)
				<< "\n" << char(179) << char(004) << "\t" << char(179)
				<< "\n" << char(179) << "\t" << char(179)
				<< "\n" << char(179) << "\t" << char(179)
				<< "\n" << char(179) << "      6" << char(179)
				<< "\n" << char(179) << "      " << char(004) << char(179)
				<< "\n" << char(192) << char(196)
				<< char(196) << char(196) << char(196) <<
				char(196) << char(196) << char(196)
				<< char(217);
			break;
		case 'c':
			cout << char(218) << char(196) << char(196) <<
				char(196) << char(196) << char(196)
				<< char(196) << char(196) << char(191)
				<< "\n" << char(179) << "6\t" << char(179)
				<< "\n" << char(179) << char(005) << "\t" << char(179)
				<< "\n" << char(179) << "\t" << char(179)
				<< "\n" << char(179) << "\t" << char(179)
				<< "\n" << char(179) << "      6" << char(179)
				<< "\n" << char(179) << "      " << char(005) << char(179)
				<< "\n" << char(192) << char(196)
				<< char(196) << char(196) << char(196) <<
				char(196) << char(196) << char(196)
				<< char(217);
			break;
		case 's':
			cout << char(218) << char(196) << char(196) <<
				char(196) << char(196) << char(196)
				<< char(196) << char(196) << char(191)
				<< "\n" << char(179) << "6\t" << char(179)
				<< "\n" << char(179) << char(006) << "\t" << char(179)
				<< "\n" << char(179) << "\t" << char(179)
				<< "\n" << char(179) << "\t" << char(179)
				<< "\n" << char(179) << "      6" << char(179)
				<< "\n" << char(179) << "      " << char(006) << char(179)
				<< "\n" << char(192) << char(196)
				<< char(196) << char(196) << char(196) <<
				char(196) << char(196) << char(196)
				<< char(217);
			break;
		default:
			cout << "Invalid value. Please, try again.";
			break;
		}
		break;
	case 7:
		switch (suit)
		{
		case 'h':
			cout << char(218) << char(196) << char(196) <<
				char(196) << char(196) << char(196)
				<< char(196) << char(196) << char(191)
				<< "\n" << char(179) << "7\t" << char(179)
				<< "\n" << char(179) << char(003) << "\t" << char(179)
				<< "\n" << char(179) << "\t" << char(179)
				<< "\n" << char(179) << "\t" << char(179)
				<< "\n" << char(179) << "      7" << char(179)
				<< "\n" << char(179) << "      " << char(003) << char(179)
				<< "\n" << char(192) << char(196)
				<< char(196) << char(196) << char(196) <<
				char(196) << char(196) << char(196)
				<< char(217);
			break;
		case 'd':
			cout << char(218) << char(196) << char(196) <<
				char(196) << char(196) << char(196)
				<< char(196) << char(196) << char(191)
				<< "\n" << char(179) << "7\t" << char(179)
				<< "\n" << char(179) << char(004) << "\t" << char(179)
				<< "\n" << char(179) << "\t" << char(179)
				<< "\n" << char(179) << "\t" << char(179)
				<< "\n" << char(179) << "      7" << char(179)
				<< "\n" << char(179) << "      " << char(004) << char(179)
				<< "\n" << char(192) << char(196)
				<< char(196) << char(196) << char(196) <<
				char(196) << char(196) << char(196)
				<< char(217);
			break;
		case 'c':
			cout << char(218) << char(196) << char(196) <<
				char(196) << char(196) << char(196)
				<< char(196) << char(196) << char(191)
				<< "\n" << char(179) << "7\t" << char(179)
				<< "\n" << char(179) << char(005) << "\t" << char(179)
				<< "\n" << char(179) << "\t" << char(179)
				<< "\n" << char(179) << "\t" << char(179)
				<< "\n" << char(179) << "      7" << char(179)
				<< "\n" << char(179) << "      " << char(005) << char(179)
				<< "\n" << char(192) << char(196)
				<< char(196) << char(196) << char(196) <<
				char(196) << char(196) << char(196)
				<< char(217);
			break;
		case 's':
			cout << char(218) << char(196) << char(196) <<
				char(196) << char(196) << char(196)
				<< char(196) << char(196) << char(191)
				<< "\n" << char(179) << "7\t" << char(179)
				<< "\n" << char(179) << char(006) << "\t" << char(179)
				<< "\n" << char(179) << "\t" << char(179)
				<< "\n" << char(179) << "\t" << char(179)
				<< "\n" << char(179) << "      7" << char(179)
				<< "\n" << char(179) << "      " << char(006) << char(179)
				<< "\n" << char(192) << char(196)
				<< char(196) << char(196) << char(196) <<
				char(196) << char(196) << char(196)
				<< char(217);
			break;
		default:
			cout << "Invalid value. Please, try again.";
			break;
		}
		break;
	case 8:
		switch (suit)
		{
		case 'h':
			cout << char(218) << char(196) << char(196) <<
				char(196) << char(196) << char(196)
				<< char(196) << char(196) << char(191)
				<< "\n" << char(179) << "8\t" << char(179)
				<< "\n" << char(179) << char(003) << "\t" << char(179)
				<< "\n" << char(179) << "\t" << char(179)
				<< "\n" << char(179) << "\t" << char(179)
				<< "\n" << char(179) << "      8" << char(179)
				<< "\n" << char(179) << "      " << char(003) << char(179)
				<< "\n" << char(192) << char(196)
				<< char(196) << char(196) << char(196) <<
				char(196) << char(196) << char(196)
				<< char(217);
			break;
		case 'd':
			cout << char(218) << char(196) << char(196) <<
				char(196) << char(196) << char(196)
				<< char(196) << char(196) << char(191)
				<< "\n" << char(179) << "8\t" << char(179)
				<< "\n" << char(179) << char(004) << "\t" << char(179)
				<< "\n" << char(179) << "\t" << char(179)
				<< "\n" << char(179) << "\t" << char(179)
				<< "\n" << char(179) << "      8" << char(179)
				<< "\n" << char(179) << "      " << char(004) << char(179)
				<< "\n" << char(192) << char(196)
				<< char(196) << char(196) << char(196) <<
				char(196) << char(196) << char(196)
				<< char(217);
			break;
		case 'c':
			cout << char(218) << char(196) << char(196) <<
				char(196) << char(196) << char(196)
				<< char(196) << char(196) << char(191)
				<< "\n" << char(179) << "8\t" << char(179)
				<< "\n" << char(179) << char(005) << "\t" << char(179)
				<< "\n" << char(179) << "\t" << char(179)
				<< "\n" << char(179) << "\t" << char(179)
				<< "\n" << char(179) << "      8" << char(179)
				<< "\n" << char(179) << "      " << char(005) << char(179)
				<< "\n" << char(192) << char(196)
				<< char(196) << char(196) << char(196) <<
				char(196) << char(196) << char(196)
				<< char(217);
			break;
		case 's':
			cout << char(218) << char(196) << char(196) <<
				char(196) << char(196) << char(196)
				<< char(196) << char(196) << char(191)
				<< "\n" << char(179) << "8\t" << char(179)
				<< "\n" << char(179) << char(006) << "\t" << char(179)
				<< "\n" << char(179) << "\t" << char(179)
				<< "\n" << char(179) << "\t" << char(179)
				<< "\n" << char(179) << "      8" << char(179)
				<< "\n" << char(179) << "      " << char(006) << char(179)
				<< "\n" << char(192) << char(196)
				<< char(196) << char(196) << char(196) <<
				char(196) << char(196) << char(196)
				<< char(217);
			break;
		default:
			cout << "Invalid value. Please, try again.";
			break;
		}
		break;
	case 9:
		switch (suit)
		{
		case 'h':
			cout << char(218) << char(196) << char(196) <<
				char(196) << char(196) << char(196)
				<< char(196) << char(196) << char(191)
				<< "\n" << char(179) << "9\t" << char(179)
				<< "\n" << char(179) << char(003) << "\t" << char(179)
				<< "\n" << char(179) << "\t" << char(179)
				<< "\n" << char(179) << "\t" << char(179)
				<< "\n" << char(179) << "      9" << char(179)
				<< "\n" << char(179) << "      " << char(003) << char(179)
				<< "\n" << char(192) << char(196)
				<< char(196) << char(196) << char(196) <<
				char(196) << char(196) << char(196)
				<< char(217);
			break;
		case 'd':
			cout << char(218) << char(196) << char(196) <<
				char(196) << char(196) << char(196)
				<< char(196) << char(196) << char(191)
				<< "\n" << char(179) << "9\t" << char(179)
				<< "\n" << char(179) << char(004) << "\t" << char(179)
				<< "\n" << char(179) << "\t" << char(179)
				<< "\n" << char(179) << "\t" << char(179)
				<< "\n" << char(179) << "      9" << char(179)
				<< "\n" << char(179) << "      " << char(004) << char(179)
				<< "\n" << char(192) << char(196)
				<< char(196) << char(196) << char(196) <<
				char(196) << char(196) << char(196)
				<< char(217);
			break;
		case 'c':
			cout << char(218) << char(196) << char(196) <<
				char(196) << char(196) << char(196)
				<< char(196) << char(196) << char(191)
				<< "\n" << char(179) << "9\t" << char(179)
				<< "\n" << char(179) << char(005) << "\t" << char(179)
				<< "\n" << char(179) << "\t" << char(179)
				<< "\n" << char(179) << "\t" << char(179)
				<< "\n" << char(179) << "      9" << char(179)
				<< "\n" << char(179) << "      " << char(005) << char(179)
				<< "\n" << char(192) << char(196)
				<< char(196) << char(196) << char(196) <<
				char(196) << char(196) << char(196)
				<< char(217);
			break;
		case 's':
			cout << char(218) << char(196) << char(196) <<
				char(196) << char(196) << char(196)
				<< char(196) << char(196) << char(191)
				<< "\n" << char(179) << "9\t" << char(179)
				<< "\n" << char(179) << char(006) << "\t" << char(179)
				<< "\n" << char(179) << "\t" << char(179)
				<< "\n" << char(179) << "\t" << char(179)
				<< "\n" << char(179) << "      9" << char(179)
				<< "\n" << char(179) << "      " << char(006) << char(179)
				<< "\n" << char(192) << char(196)
				<< char(196) << char(196) << char(196) <<
				char(196) << char(196) << char(196)
				<< char(217);
			break;
		default:
			cout << "Invalid value. Please, try again.";
			break;
		}
		break;
	case 10:
		switch (suit)
		{
		case 'h':
			cout << char(218) << char(196) << char(196) <<
				char(196) << char(196) << char(196)
				<< char(196) << char(196) << char(191)
				<< "\n" << char(179) << "10\t" << char(179)
				<< "\n" << char(179) << char(003) << "\t" << char(179)
				<< "\n" << char(179) << "\t" << char(179)
				<< "\n" << char(179) << "\t" << char(179)
				<< "\n" << char(179) << "     10" << char(179)
				<< "\n" << char(179) << "      " << char(003) << char(179)
				<< "\n" << char(192) << char(196)
				<< char(196) << char(196) << char(196) <<
				char(196) << char(196) << char(196)
				<< char(217);
			break;
		case 'd':
			cout << char(218) << char(196) << char(196) <<
				char(196) << char(196) << char(196)
				<< char(196) << char(196) << char(191)
				<< "\n" << char(179) << "10\t" << char(179)
				<< "\n" << char(179) << char(004) << "\t" << char(179)
				<< "\n" << char(179) << "\t" << char(179)
				<< "\n" << char(179) << "\t" << char(179)
				<< "\n" << char(179) << "     10" << char(179)
				<< "\n" << char(179) << "      " << char(004) << char(179)
				<< "\n" << char(192) << char(196)
				<< char(196) << char(196) << char(196) <<
				char(196) << char(196) << char(196)
				<< char(217);
			break;
		case 'c':
			cout << char(218) << char(196) << char(196) <<
				char(196) << char(196) << char(196)
				<< char(196) << char(196) << char(191)
				<< "\n" << char(179) << "10\t" << char(179)
				<< "\n" << char(179) << char(005) << "\t" << char(179)
				<< "\n" << char(179) << "\t" << char(179)
				<< "\n" << char(179) << "\t" << char(179)
				<< "\n" << char(179) << "     10" << char(179)
				<< "\n" << char(179) << "      " << char(005) << char(179)
				<< "\n" << char(192) << char(196)
				<< char(196) << char(196) << char(196) <<
				char(196) << char(196) << char(196)
				<< char(217);
			break;
		case 's':
			cout << char(218) << char(196) << char(196) <<
				char(196) << char(196) << char(196)
				<< char(196) << char(196) << char(191)
				<< "\n" << char(179) << "10\t" << char(179)
				<< "\n" << char(179) << char(006) << "\t" << char(179)
				<< "\n" << char(179) << "\t" << char(179)
				<< "\n" << char(179) << "\t" << char(179)
				<< "\n" << char(179) << "     10" << char(179)
				<< "\n" << char(179) << "      " << char(006) << char(179)
				<< "\n" << char(192) << char(196)
				<< char(196) << char(196) << char(196) <<
				char(196) << char(196) << char(196)
				<< char(217);
			break;
		default:
			cout << "Invalid value. Please, try again.";
			break;
		}
		break;
	case 11:
		switch (suit)
		{
		case 'h':
			cout << char(218) << char(196) << char(196) <<
				char(196) << char(196) << char(196)
				<< char(196) << char(196) << char(191)
				<< "\n" << char(179) << "J\t" << char(179)
				<< "\n" << char(179) << char(003) << "\t" << char(179)
				<< "\n" << char(179) << "\t" << char(179)
				<< "\n" << char(179) << "\t" << char(179)
				<< "\n" << char(179) << "      J" << char(179)
				<< "\n" << char(179) << "      " << char(003) << char(179)
				<< "\n" << char(192) << char(196)
				<< char(196) << char(196) << char(196) <<
				char(196) << char(196) << char(196)
				<< char(217);
			break;
		case 'd':
			cout << char(218) << char(196) << char(196) <<
				char(196) << char(196) << char(196)
				<< char(196) << char(196) << char(191)
				<< "\n" << char(179) << "J\t" << char(179)
				<< "\n" << char(179) << char(004) << "\t" << char(179)
				<< "\n" << char(179) << "\t" << char(179)
				<< "\n" << char(179) << "\t" << char(179)
				<< "\n" << char(179) << "      J" << char(179)
				<< "\n" << char(179) << "      " << char(004) << char(179)
				<< "\n" << char(192) << char(196)
				<< char(196) << char(196) << char(196) <<
				char(196) << char(196) << char(196)
				<< char(217);
			break;
		case 'c':
			cout << char(218) << char(196) << char(196) <<
				char(196) << char(196) << char(196)
				<< char(196) << char(196) << char(191)
				<< "\n" << char(179) << "J\t" << char(179)
				<< "\n" << char(179) << char(005) << "\t" << char(179)
				<< "\n" << char(179) << "\t" << char(179)
				<< "\n" << char(179) << "\t" << char(179)
				<< "\n" << char(179) << "      J" << char(179)
				<< "\n" << char(179) << "      " << char(005) << char(179)
				<< "\n" << char(192) << char(196)
				<< char(196) << char(196) << char(196) <<
				char(196) << char(196) << char(196)
				<< char(217);
			break;
		case 's':
			cout << char(218) << char(196) << char(196) <<
				char(196) << char(196) << char(196)
				<< char(196) << char(196) << char(191)
				<< "\n" << char(179) << "J\t" << char(179)
				<< "\n" << char(179) << char(006) << "\t" << char(179)
				<< "\n" << char(179) << "\t" << char(179)
				<< "\n" << char(179) << "\t" << char(179)
				<< "\n" << char(179) << "      J" << char(179)
				<< "\n" << char(179) << "      " << char(006) << char(179)
				<< "\n" << char(192) << char(196)
				<< char(196) << char(196) << char(196) <<
				char(196) << char(196) << char(196)
				<< char(217);
			break;
		default:
			cout << "Invalid value. Please, try again.";
			break;
		}
		break;
	case 12:
		switch (suit)
		{
		case 'h':
			cout << char(218) << char(196) << char(196) <<
				char(196) << char(196) << char(196)
				<< char(196) << char(196) << char(191)
				<< "\n" << char(179) << "Q\t" << char(179)
				<< "\n" << char(179) << char(003) << "\t" << char(179)
				<< "\n" << char(179) << "\t" << char(179)
				<< "\n" << char(179) << "\t" << char(179)
				<< "\n" << char(179) << "      Q" << char(179)
				<< "\n" << char(179) << "      " << char(003) << char(179)
				<< "\n" << char(192) << char(196)
				<< char(196) << char(196) << char(196) <<
				char(196) << char(196) << char(196)
				<< char(217);
			break;
		case 'd':
			cout << char(218) << char(196) << char(196) <<
				char(196) << char(196) << char(196)
				<< char(196) << char(196) << char(191)
				<< "\n" << char(179) << "Q\t" << char(179)
				<< "\n" << char(179) << char(004) << "\t" << char(179)
				<< "\n" << char(179) << "\t" << char(179)
				<< "\n" << char(179) << "\t" << char(179)
				<< "\n" << char(179) << "      Q" << char(179)
				<< "\n" << char(179) << "      " << char(004) << char(179)
				<< "\n" << char(192) << char(196)
				<< char(196) << char(196) << char(196) <<
				char(196) << char(196) << char(196)
				<< char(217);
			break;
		case 'c':
			cout << char(218) << char(196) << char(196) <<
				char(196) << char(196) << char(196)
				<< char(196) << char(196) << char(191)
				<< "\n" << char(179) << "Q\t" << char(179)
				<< "\n" << char(179) << char(005) << "\t" << char(179)
				<< "\n" << char(179) << "\t" << char(179)
				<< "\n" << char(179) << "\t" << char(179)
				<< "\n" << char(179) << "      Q" << char(179)
				<< "\n" << char(179) << "      " << char(005) << char(179)
				<< "\n" << char(192) << char(196)
				<< char(196) << char(196) << char(196) <<
				char(196) << char(196) << char(196)
				<< char(217);
			break;
		case 's':
			cout << char(218) << char(196) << char(196) <<
				char(196) << char(196) << char(196)
				<< char(196) << char(196) << char(191)
				<< "\n" << char(179) << "Q\t" << char(179)
				<< "\n" << char(179) << char(006) << "\t" << char(179)
				<< "\n" << char(179) << "\t" << char(179)
				<< "\n" << char(179) << "\t" << char(179)
				<< "\n" << char(179) << "      Q" << char(179)
				<< "\n" << char(179) << "      " << char(006) << char(179)
				<< "\n" << char(192) << char(196)
				<< char(196) << char(196) << char(196) <<
				char(196) << char(196) << char(196)
				<< char(217);
			break;
		default:
			cout << "Invalid value. Please, try again.";
			break;
		}
		break;
	case 13:
	case 'h':
		cout << char(218) << char(196) << char(196) <<
			char(196) << char(196) << char(196)
			<< char(196) << char(196) << char(191)
			<< "\n" << char(179) << "K\t" << char(179)
			<< "\n" << char(179) << char(003) << "\t" << char(179)
			<< "\n" << char(179) << "\t" << char(179)
			<< "\n" << char(179) << "\t" << char(179)
			<< "\n" << char(179) << "      K" << char(179)
			<< "\n" << char(179) << "      " << char(003) << char(179)
			<< "\n" << char(192) << char(196)
			<< char(196) << char(196) << char(196) <<
			char(196) << char(196) << char(196)
			<< char(217);
		break;
	case 'd':
		cout << char(218) << char(196) << char(196) <<
			char(196) << char(196) << char(196)
			<< char(196) << char(196) << char(191)
			<< "\n" << char(179) << "K\t" << char(179)
			<< "\n" << char(179) << char(004) << "\t" << char(179)
			<< "\n" << char(179) << "\t" << char(179)
			<< "\n" << char(179) << "\t" << char(179)
			<< "\n" << char(179) << "      K" << char(179)
			<< "\n" << char(179) << "      " << char(004) << char(179)
			<< "\n" << char(192) << char(196)
			<< char(196) << char(196) << char(196) <<
			char(196) << char(196) << char(196)
			<< char(217);
		break;
	case 'c':
		cout << char(218) << char(196) << char(196) <<
			char(196) << char(196) << char(196)
			<< char(196) << char(196) << char(191)
			<< "\n" << char(179) << "K\t" << char(179)
			<< "\n" << char(179) << char(005) << "\t" << char(179)
			<< "\n" << char(179) << "\t" << char(179)
			<< "\n" << char(179) << "\t" << char(179)
			<< "\n" << char(179) << "      K" << char(179)
			<< "\n" << char(179) << "      " << char(005) << char(179)
			<< "\n" << char(192) << char(196)
			<< char(196) << char(196) << char(196) <<
			char(196) << char(196) << char(196)
			<< char(217);
		break;
	case 's':
		cout << char(218) << char(196) << char(196) <<
			char(196) << char(196) << char(196)
			<< char(196) << char(196) << char(191)
			<< "\n" << char(179) << "K\t" << char(179)
			<< "\n" << char(179) << char(006) << "\t" << char(179)
			<< "\n" << char(179) << "\t" << char(179)
			<< "\n" << char(179) << "\t" << char(179)
			<< "\n" << char(179) << "      K" << char(179)
			<< "\n" << char(179) << "      " << char(006) << char(179)
			<< "\n" << char(192) << char(196)
			<< char(196) << char(196) << char(196) <<
			char(196) << char(196) << char(196)
			<< char(217);
		break;
	default:
		cout << "Invalid value. Please, try again.";
		break;
	}
	return;
}

int main() {
	const int size = 13;
	int hearts[size], diamonds[size], clubs[size], spades[size];
	for (int i = 0; i < size; i++)
	{
		hearts[i] = i + 1;
		diamonds[i] = i + 1;
		clubs[i] = i + 1;
		spades[i] = i + 1;
	}
	SomeFunc(10, 'h');
	return 0;
}