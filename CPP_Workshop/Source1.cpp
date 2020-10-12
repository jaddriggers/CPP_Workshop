//If/else example
	//int main() {
	//	std::string input;
	//	int number;
	//
	//	cout << "Please enter a number: ";
	//	getline(std::cin, input);
	//	number = std::stoi(input);
	//
	//	if (number < 10)
	//	{
	//		cout << "The number you entered was " << number;
	//		cout << " and " << number << " is less than 10! \n";
	//	}
	//	else if (number > 10)
	//	{
	//		cout << "The number you entered was " << number;
	//		cout << " and " << number << " is greater than 10!\n";
	//	}
	//	else
	//	{
	//		cout << "The number you entered was exactly " << number;
	//	}
	//	return 0;
	//}

	//using if/else
	//int main()
	//
	//{
	//	std::string input;
	//	int number;
	//
	//	cout << "Menu\n";
	//	cout << "1: Fries\n";
	//	cout << "2: Burger\n";
	//	cout << "3: Shake\n";
	//
	//	cout << "Please enter a number 1-3 to view an item price: ";
	//	getline(std::cin, input);
	//	number = std::stoi(input);
	//
	//	if (number == 1)
	//	{
	//		cout << "Fries: $0.99\n";
	//	}
	//	else if (number == 2)
	//	{
	//		cout << "Burger: $3.25\n";
	//	}
	//	else if (number == 3)
	//	{
	//		cout << "Shake: #1.99\n";
	//	}
	//	else
	//	{
	//		cout << "choice number " << number << " is not a valid option.";
	//	}
	//
	//	return 0;
	//}

	//Using switch vs if/else
	//int main() {
	//	std::string input;
	//	int number;
	//
	//	cout << "Menu\n";
	//	cout << "1: Fries\n";
	//	cout << "2: Burger\n";
	//	cout << "3: Shake\n";
	//
	//	cout << "Please enter a number 1-3 to view an item price: ";
	//	getline(std::cin, input);
	//	number = std::stoi(input);
	//
	//	switch (number)
	//	{
	//	case 1:
	//		cout << "Fries: $0.99\n";
	//		break;
	//	case 2:
	//		cout << "Burger: $3.25\n";
	//		break;
	//	case 3:
	//		cout << "Shake: $1.99\n";
	//		break;
	//
	//	default:
	//		cout << "Invalid choice.";
	//		break;
	//	}
	//	return 0;
	//}

	//While loops
	//int main()
	//{
	//	bool bIsRunning = true;
	//
	//	{
	//		while (bIsRunning)
	//		{
	//			std::string input;
	//			int number;
	//
	//			cout << "Menu\n";
	//			cout << "1: Fries\n";
	//			cout << "2: Burger\n";
	//			cout << "3: Shake\n";
	//
	//			cout << "Please enter a number 1-3 to view an item price: ";
	//			getline(std::cin, input);
	//			number = std::stoi(input);
	//
	//			switch (number)
	//			{
	//			case 1:
	//				cout << "Fries: $0.99\n";
	//				break;
	//			case 2:
	//				cout << "Burger: $3.25\n";
	//				break;
	//			case 3:
	//				cout << "Shake: $1.99\n";
	//				break;
	//
	//			default:
	//				cout << "Invalid choice.";
	//				break;
	//			}
	//		}
	//		return 0;
	//	}
	//}

	//For loops
//int main()
//
//{
//	for (int i = 0; i <= 10; i++)
//	{
//		cout << i;
//	}
//
//	return 0;
//}

//While loop to generate random numbers
//int main()
//
//{
//	bool bIsRunning = true;
//	std::string input = "";
//	int count = 0;
//
//	cout << "***Random Number Generator***\n";
//	while (bIsRunning)
//	{
//		cout << "Enter amount of numbers to generate, or 0 to exit: ";
//
//		//get the count from the user
//		getline(std::cin, input);
//		count = std::stoi(input);
//
//		//check if user wants to quit app
//		if (count == 0)
//		{
//			break;
//		}
//		//Generate/output random numbers
//		srand((unsigned)time(0));
//
//		for (int i = 0; i < count; i++)
//		{
//			cout << rand() % 10;
//			if (i == count - 1)
//			{
//				continue;
//			}
//			cout << ", ";
//		}
//		cout << "\n\n";
//	}
//
//	return 0;
//}

//Break example
//int main()
//
//{
//	cout << "Loop starting....\n";
//	int count = 1;
//
//	while (count <= 5)
//	{
//		cout << "\n" << count;
//		if (count == 2)
//			break;
//		count++;
//	}
//
//	cout << "\n\nLoop finished.";
//
//	return 0;
//}

//Break using for loop
//int main()
//{
//	cout << "Loop starting...\n";
//	for (int count = 1; count <= 5; count++)
//	{
//		cout << "\n" << count;
//		if (count == 5)
//		{
//			break;
//		}
//	}
//	cout << "\n\nLoop finished.\n\n";
//
//	return 0;
//}

//Exercise 12: Making a Loop More Efficient Using break and continue p.79

//int main()
//
//{
//	int multiple = 0;
//	int count = 0;
//	int numbersPrinted = 0;
//	std::string input = "";
//
//	cout << "Enter the value whose multiples will be printed: ";
//	getline(std::cin, input);
//	multiple = std::stoi(input);
//
//	cout << "Enter the max amount of numbers to print: ";
//	getline(std::cin, input);
//	count = std::stoi(input);
//
//	for (int i = 1; i <= 100; i++)
//	{
//		if (numbersPrinted == count)
//		{
//			break;
//		}
//		if (i % multiple != 0)
//		{
//			continue;;
//		}
//		cout << i << "\n";
//		numbersPrinted++;
//	}
//
//	return 0;
//}

//Activity 2: Creating a Number-Guessing Game Using Loops and Conditional statements p.82 The C++ Workshop by Dale Green

//int main()
//
//{
//	//declare variables
//	int guessCount = 0;
//	int minNumber = 0;
//	int maxNumber = 0;
//	int randomNumber = 0;
//
//	std::string input = "";
//	bool bIsRunning = true;
//
//	while (bIsRunning)
//	{
//		cout << "***Number guessing game***\n";
//		cout << "\nEnter the number of guesses: ";
//		getline(std::cin, input);
//		guessCount = std::stoi(input);
//
//		cout << "Enter the minimum number: ";
//		getline(std::cin, input);
//		minNumber = std::stoi(input);
//
//		cout << "Enter the maximum number: ";
//		getline(std::cin, input);
//		maxNumber = std::stoi(input);
//
//		//Generate random number
//		srand((unsigned)time(0));
//		randomNumber = rand() % (maxNumber - minNumber + 1) + minNumber;
//
//		//Process user guesses
//		for (int i = 0; i < guessCount; i++)
//		{
//			int guess = 0;
//			cout << "\nEnter your guess: ";
//			getline(std::cin, input);
//			guess = std::stoi(input);
//
//			if (guess == randomNumber)
//			{
//				cout << "Well done! You guessed " << guess << " which is the correct number!\n";
//				break;
//			}
//			int guessesRemaining = guessCount - (i + 1);
//
//			cout << "Your guess of " << guess << " was too " << (guess < randomNumber ? "low. " : "high. ");
//			cout << "You have " << guessesRemaining << (guessesRemaining > 1 ? " guesses" : "guess") << " remaining";
//		}
//
//		cout << "\nEnter 0 to exit, or any number to play again: ";
//		getline(std::cin, input);
//
//		if (std::stoi(input) == 0)
//		{
//			bIsRunning == false;
//		}
//	}
//
//	return 0;
//}

//Chapter 3- Built in Data types P.87 The C++ Workshop by Dale Green

//int main()
//{
//	int myInt = 1;
//	bool myBool = false;
//	char myChar = 'a';
//
//	cout << "The size of an int is " << sizeof(myInt) << ".\n";
//	cout << "The size of a bool is " << sizeof(myBool) << ".\n";
//	cout << "The size of a char is " << sizeof(myChar) << ".\n";
//
//	return 0;
//}

//int main()
//
//{
//	int customerAges[] = { 1,2,3,4,5 };
//
//	cout << customerAges[0] << std::endl;
//	cout << customerAges[1] << std::endl;
//	cout << customerAges[2] << std::endl;
//	cout << customerAges[3] << std::endl;
//	cout << customerAges[4] << std::endl;
//
//	std::cout << &customerAges[0] << std::endl;
//	std::cout << &customerAges[1] << std::endl;
//	std::cout << &customerAges[2] << std::endl;
//	std::cout << &customerAges[3] << std::endl;
//	std::cout << &customerAges[4] << std::endl;
//	return 0;
//}

//Exercise 14: Implementing Containers to Store User names p.100

//Define the array
//#define NAME_COUNT 5
//
//int main()
//{
//	std::string names[NAME_COUNT];
//
//	//Collect user names
//	cout << "Please input user names. " << std::endl;
//	for (int i = 0; i < NAME_COUNT; i++)
//	{
//		cout << "User " << i + 1 << ": ";
//		getline(std::cin, names[i]);
//	}
//
//	//Fetch user ID's, ensuring they're valid
//	bool bIsRunning = true;
//	while (bIsRunning)
//	{
//		int userIndex = 0;
//		std::string inputString = "";
//		cout << "Enter the user-ID of user to fetch or -1 to quit: ";
//		getline(std::cin, inputString);
//		userIndex = std::stoi(inputString);
//		if (userIndex == -1)
//		{
//			bIsRunning = false;
//		}
//		else
//		{
//			if (userIndex >= 0 && userIndex < NAME_COUNT)
//			{
//				cout << "User " << userIndex << "=" << names[userIndex] << std::endl;
//			}
//			else
//			{
//				cout << "Invalid user index" << std::endl;
//			}
//		}
//	}
//
//	return 0;
//}