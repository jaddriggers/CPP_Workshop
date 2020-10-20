#include <iostream>
#include <string>

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
#define NAME_COUNT 5

int main()
{
	std::string names[NAME_COUNT];

	//Collect user names
	cout << "Please input user names. " << std::endl;
	for (int i = 0; i < NAME_COUNT; i++)
	{
		cout << "User " << i + 1 << ": ";
		getline(std::cin, names[i]);
	}

	//Fetch user ID's, ensuring they're valid
	bool bIsRunning = true;
	while (bIsRunning)
	{
		int userIndex = 0;
		std::string inputString = "";
		cout << "Enter the user-ID of user to fetch or -1 to quit: ";
		getline(std::cin, inputString);
		userIndex = std::stoi(inputString);
		if (userIndex == -1)
		{
			bIsRunning = false;
		}
		else
		{
			if (userIndex >= 0 && userIndex < NAME_COUNT)
			{
				cout << "User " << userIndex << "=" << names[userIndex] << std::endl;
			}
			else
			{
				cout << "Invalid user index" << std::endl;
			}
		}
	}

	return 0;
}

//Adding and deleting from Arrays

//std::vector<int> myVector{1, 2, 3, 4, 5};
//
//void PrintVector()
//{
//	for (int i = 0; i < myVector.size(); i++)
//	{
//		std::cout << myVector[i];
//	}
//	std::cout << "\n\n";
//}
//
//int main()
//{
//		PrintVector();
//		myVector.pop_back();
//		PrintVector();
//		myVector.push_back(6);
//		PrintVector();
//		myVector.erase(myVector.begin() + 1);
//		PrintVector();
//		myVector.insert(myVector.begin() + 3, 8);
//		PrintVector();
//}

//Classes

//class MyClass
//{
//	int myInt = 0;
//public:
//	void IncrementInt()
//	{
//		myInt++;
//		std::cout << "MyClass::IncrementInt: " << myInt;
//	};
//};
//
//int main()
//{
//	MyClass classObject;
//	classObject.IncrementInt();
//}


//class Myclass
//{
//public:
//	int myPublicInt = 0;
//protected:
//	int myProtectedInt = 0;
//private:
//	int myPrivateInt = 0;
//};
//
//int main()
//{
//	Myclass testClass;
//
//	std::cout << testClass.myPublicInt << "\n";
//	std::cout << testClass.myProtectedInt << "\n";
//	std::cout << testClass.myPrivateInt << "\n";
//}

//class myClass
//{
//	
//public:
//	myClass()
//	{
//		std::cout << "My Class Constructor Called\n";
//		myPublicInt = 5;
//	}
//	int myPublicInt = 0;
//
//	~myClass()
//	{
//		std::cout << "My class destructor called\n";
//	}
//};
//
//int main()
//{
//	std::cout << "Application started\n";
//	myClass testClass;
//	std::cout << testClass.myPublicInt << "\n";
//}

// Chapter 3 built in data types
//class MyClass
//{
//public:
//	int myInt = 0;
//	bool myBool = false;
//
//	std::string GetString()
//	{
//		return "Hello World!";
//	}
//};
//
//struct MyStruct
//{
//	int myInt = 0;
//	bool myBool = false;
//	std::string GetString()
//	{
//		return "Hello World!";
//	}
//
//};
//
//int main()
//{
//	MyClass testClass;
//	std::cout << "testClass::myInt: " << testClass.myInt << "\n";
//	std::cout << "testClass::myBool: " << testClass.myBool << "\n";
//	std::cout << "testClass::GetString: " << testClass.GetString() << "\n";
//
//
//	MyStruct testStruct;
//	std::cout << "testStruct::myInt: " << testStruct.myInt << "\n";
//	std::cout << "testStruct::myBool: " << testStruct.myBool << "\n";
//	std::cout << "testStruct::GetString: " << testStruct.GetString() << "\n";
//};

//Exercise 20 p.128
//void MyFunc()
//{
//	int myInt1 = 1; //This variable is destroyed after this scope and not accessible within main()
//
//}
//int main()
//{
//	int myInt2 = 2; //Variable accesible within this scope
//	{
//		int myInt3 = 3; //This variable is not accessible in it's own scope
//	}
//	//Print values
//	std::cout << myInt1 << std::endl;
//	std::cout << myInt2 << std::endl;
//	std::cout << myInt3<< std::endl;
//}
/***********************************************************************************************/
//Static example
//If we make a change to this application, however, and define our myInt variable as
//static, then our program will behave very differently :

//int myInt()
//{
//	static int myInt = 0;
//	return ++myInt;
//}
//
//int main()
//{
//	for (int i =0; i < 5; i++)
//	{
//		std::cout << myInt();
//	}
//}
/*********************************************************************************************/
//Activity 3: Sign-Up Application

/*Define the class that will represent a record in the system. This is going to
be a person, containing both a name and an age. */
//struct Person 
//{
//	int age = 0;
//	std::string name = "";
//};
/*declare a vector of Person type
to store these records. A vector is used for the flexibility it gives in not having to
declare an array size upfront.*/

//std::vector<Person> records;

/*start adding some functions to add and fetch records; first, add.
A record consists of a name and age, so write a function that will accept those two
as parameters, create a record object, and add it to our record vector. Name this
function Add Record.*/
//void AddRecord(std::string newName, int newAge)
//{
//	Person newRecord;
//	newRecord.name = newName;
//	newRecord.age = newAge;
//	records.push_back(newRecord);
//	std::cout << "\nUser record added successfully. \n\n";
//};
/*Add a function to fetch a record. This function should accept one parameter (a user
ID) and return the record for that user. Name this function Fetch Record.*/
//Person FetchRecord(int userID)
//{
//	return records.at(userID);
//};
/*Enter the main function and start the body of the application. Start with an outer
main loop, as you used in the last chapter, and output some options to the user.
You will give them three options: Add Record, Fetch Record, and Quit. Present these options to the user and then capture their input.*/
//int main()
//{
//	std::cout << "User Sign up Application\n" << std::endl;
//	bool bIsRunning = true;
//	while (bIsRunning)
//	{
//		std::cout << "Please select an option:\n";
//		std::cout << "1: Add Record\n";
//		std::cout << "2: Fetch Record\n";
//		std::cout << "3: Quit\n\n";
//		std::cout << "Enter Option: ";
//		std::string inputString;
//		std::getline(std::cin, inputString);

		/*There are three possible branches now, depending on user input, which we'll
handle with a switch statement. Case 1 is adding a record, and to do so,
you'll get the user's name and age from the user and then make a call to our
AddRecord function.*/
//switch (std::stoi(inputString))
//{
//	case 1:
//		{
//	std::string name = "";
//	int age = 0;
//	std::cout << "\nAdd User,. Please enter user name and age:\n";
//	std::cout << "Name: ";
//	std::getline(std::cin, name);
//	std::cout << "Age: ";
//	std::getline(std::cin, inputString);
//	age = std::stoi(inputString);
//	AddRecord(name, age);
//}
//	break;

	/*The next case is the user wanting to fetch a record. For this, you need to get a user
ID from the user and then make a call to FetchRecord, outputting its result. This
is where you'll be catching an exception,*/
//case 2:
//{
//	int userID = 0;
//	std::cout << "\nPlease enter user ID:\n";
//	std::cout << "User ID:";
//	std::getline(std::cin, inputString);
//	userID = std::stoi(inputString);
//	Person person;
//	try
//	{
//		person = FetchRecord(userID);
//	}
//	catch (const std::out_of_range& oor)
//	{
//		std::cout << "\nError: Invalid UserID.\n\n";
//		break;
//	}
//	//output the record details
//	std::cout << "User Name: " << person.name << "\n";
//	std::cout << "User Age: " << person.age << "\n\n";
//	
//}
//break;

/*The next case is when the user wants to exit the application. This one is fairly
simple; you just need to exit our main loop.*/
/*	case 3:
		bIsRunning = false;
		break;*/

		/*Finally, add a default case. This will handle invalid options entered by the user.
All you'll do here is output an error message and send them back to the start of
the application.*/
//		default:
//			std::cout << "\n\nError: Invalid option selection. \n\n";
//			break;
//		}
//
//	}
//}