#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <utility>
#include <vector>
#include <algorithm>

using namespace std;

typedef std::pair<int, int> launch;

map<launch, char>::iterator x;

typedef map<pair<int, int>, char> transitions;
transitions trans;

vector<int> currentStates;

int main() {

  freopen("NFAInoutFile.in", "r", stdin);
  int stringCheck;
  int i, j, k;
  int finalStates;
  int numberOfInputs;
  int originOfState;
  int destinationOfState;
  int numberOfStates;
  int numberOfTransitions;
  int initialState;
  int numberOfFinals;
  char transitionSymbol;

  set<int> currentPosition;
  set<int> nextPosition;
  set<int>::iteration it;
  set<int> final;
  set<int> theIntersection;
  string inputString;

  cin >> stringCheck;

  cout << "Starting NFA Simulator........." << endl;
  cout << ('\n');

  for (i = 0; i <= stringCheck; i++) {
    final.clear();
    nextPosition.clear():
    theIntersection.clear();
    trans.clear();

    cin >> numberOfStates >> numberOfTransitions >> initialState >> numberOfFinals;
    currentPosition.insert(initialState);
    
    for (j = 0; j < numberOfFinals; j++) {
      cin >> finalStates;
      final.insert(finalStates);
    }
      for (j = 0; j < numberOfTransitions; j++) {
        currentPosition.clear();
        currentPosition.insert(initialState);
        theIntersection.clear();
        cin >> originOfState >> destinationOfState >> transitionSymbol;

        trans.insert(transitions::value_type(std::make_pair(originOfState, destinationOfState), transitionSymbol));
      }
        cin >> numberOfInputs;

        cout <<"...............EXECUTING............"<< endl;
        cout << ('\n');

        for (j = 0; j < numberOfInputs; j++) {
          currentPosition.insert(initialState);
          cin >> inputString;
          
            for (k = 0; k < inputString.size(); k++) {

              for (it = currentPosition.begin(); it != currentPosition.end(); it++) {
                
                for (x = trans.begin(); x != trans.end(); x++) {
                  
                  if (((*x).first.first == *it) && ((*x).second == inputString[k])) {
                    nextPosition.insert((*x).first.second);
                  }
                }
              }
            currentPosition = nextPosition;
          }
        }

      std::set_intersection(currentPosition.begin(), currentPosition.end(), 
      final.begin(), final.end(), std::inserter(theIntersection, theIntersection.end()));
      
      if (theIntersection.theIntersection.empty()) {
        cout << "The string " << " '" << inputString << "' " << "is REJECTED by the NFA" << endl;
        break;
      }
      else {
        cout << "The string " << " '" << inputString << "' " << "is ACCEPTED by the NFA" << endl;
        break;
      }
  }

  cout << ('\n');
  cout << "....................ENDING NFA SIMULATOR" << endl;
  cout << endl;

  return 0;
}