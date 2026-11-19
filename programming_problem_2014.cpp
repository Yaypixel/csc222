#include <iostream>
#include <vector>
#include <string>

using namespace std;

int costToSwap(string word1, string word2) {
  int score = 0;

  for (int i = 0; i < word1.length(); i++) {
    score += word1[i] - word2[i];
  }

  return score;
}

int main() {
  string word1;
  string word2;

  cin >> word1;
  cin >> word2;

  int score = costToSwap(word1, word2);

  
    if (score > 0) {
      cout << "Swapping letters to make " << word1 << " look like " << word2 << " eared " << score << " coins." << endl;
    }
    else if (score < 0) {
      cout << "Swapping letters to make " << word1 << " look like " << word2 << " lost " << (score * -1) << " coins." << endl;
    }
    else {
      cout << "Swapping letters to make " << word1 << " look like " << word2 << " was FREE." << endl;
    }

  return 0;
}
