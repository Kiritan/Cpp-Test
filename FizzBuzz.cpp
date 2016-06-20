#include <iostream>
#include <sstream>

using namespace std;
 
int main( int argc, char** argv){
	unsigned long limit;
	if(argc < 2){
		cout << "Input limit > ";
		cin >> limit;
	}
	else{
		istringstream is(argv[1]);
		is >> limit;
	}
 
	for( unsigned long i = 1; i <= limit; i++ ){
		if( i % 15 == 0 ){
			cout << "FizzBuzz" << endl;
		}
		else if( i % 3 == 0 ){
			cout << "Fizz" << endl;
		}
		else if( i % 5 == 0 ){
			cout << "Buzz" << endl;
		}
		else{
			cout << i << endl;
		}
	}
	sytem("PAUSE");
	return 0;
}
