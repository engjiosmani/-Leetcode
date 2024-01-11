#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <cmath>
using namespace std;

//Number of Good Pairs
class Array1 {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int n = nums.size();
        int total = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 1; j < n; j++) {
                if (nums[i] == nums[j] && i < j) {
                    total += 1;;
                }
            }
        }
        return total;
    }
};

//Final Value of Variable After Performing Operations
class Array2 {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int X = 0;
        for (int i = 0; i < operations.size(); i++) {
            if (operations[i] == "X++") {
                X++;
            }
            else if (operations[i] == "++X") {
                ++X;
            }
            else if (operations[i] == "X--") {
                X--;
            }
            else if (operations[i] == "--X") {
                --X;
            }
        }
        return X;
    }
};


//Concatenation of Array
class Array3 {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            nums.push_back(nums[i]);
        }
        return nums;
    }
};


//Create Target Array in the Given Order
class Array4 {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector<int>targetarray;
        for (int i = 0; i < nums.size(); i++) {
            targetarray.insert(targetarray.begin() + index[i], nums[i]);
        }
        return targetarray;
    }
};


//Count Pairs Whose Sum is Less than Target
class Array5 {
public:
    int countPairs(vector<int>& nums, int target) {
        int pairs = 0;
        for (int i = 0; i < nums.size() - 1; i++) {
            for (int j = 0; j < nums.size(); j++) {
                if (i < j && nums[i] + nums[j] < target) {
                    pairs += 1;
                }
            }
        }
        return pairs;
    }
};


//Split a String in Balanced Strings
class String1 {
public:
    int balancedStringSplit(string s) {
        int balanced = 0;
        int equal = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == 'L') {
                equal++;
            }
            else {
                equal--;
            }
            if (equal == 0) {
                balanced += 1;
            }
        }
        return balanced;
    }
};


//Defanging an IP Address
class String2 {
public:
    string defangIPaddr(string address) {
        string answer;
        for (int i = 0; i < address.size(); i++) {
            if (address[i] == '.') {
                answer += "[.]";
            }
            else {
                answer += address[i];
            }
        }
        return answer;
    }
};


//Jewels and Stones
class String3 {
public:
    int numJewelsInStones(string jewels, string stones) {
        int jewelsnumber = 0;
        for (int i = 0; i < jewels.size(); i++) {
            jewelsnumber += count(stones.begin(), stones.end(), jewels[i]);
        }
        return jewelsnumber;
    }
};


//Goal Parser Interpretation
class String4 {
public:
    string interpret(string command) {
        string answer;
        for (int i = 0; i < command.size(); i++) {
            if (command[i] == 'G') {
                answer += "G";
            }
            else if (command[i] == '(' && command[i + 1] == ')') {
                answer += "o";
            }
            else if (command[i] == '(' && command[i + 1] == 'a' && command[i + 2] == 'l' && command[i + 3] == ')') {
                answer += "al";
            }
        }
        return answer;
    }
};


//Check If Two String Arrays are Equivalent
class String5 {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string element1;
        for (int i = 0; i < word1.size(); i++) {
            element1 += word1[i];
        }
        string element2;
        for (int i = 0; i < word2.size(); i++) {
            element2 += word2[i];
        }
        if (element1 == element2) {
            return true;
        }
        else {
            return false;
        }
    }
};


//Add Two Integers
class Math1 {
public:
    int sum(int num1, int num2) {
        return num1 + num2;
    }
};


//Divisible and Non-divisible Sums Difference
class Math2 {
public:
    int differenceOfSums(int n, int m) {
        int difference;
        int divisible = 0;
        int notdivisible = 0;
        for (int i = 1; i <= n; i++) {
            if (i % m == 0) {
                divisible += i;
            }
            else {
                notdivisible += i;
            }
        }
        difference = notdivisible - divisible;
        return difference;
    }
};


//Smallest Even Multiple
class Math3 {
public:
    int smallestEvenMultiple(int n) {
        if (n % 2 == 0) {
            return n;
        }
        else {
            return n * 2;
        }
    }
};


//Subtract the Product and Sum of Digits of an Integer
class Math4 {
public:
    int subtractProductAndSum(int n) {
        int product = 1;
        int sum = 0;
        while (n > 0) {
            int digits = n % 10;
            product *= digits;
            sum += digits;
            n /= 10;
        }
        return product - sum;
    }
};


//Find the Maximum Achievable Number
class Math5 {
public:
    int theMaximumAchievableX(int num, int t) {
        int max = num + 2 * t;
        return max;
    }
};


//Matrix Diagonal Sum
class Matrix1 {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum = 0;
        int n = mat.size();
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (i == j || i + j == n - 1) {
                    sum += mat[i][j];
                }
            }
        }
        return sum;
    }
};


//Count Negative Numbers in a Sorted Matrix
class Matrix2 {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int negatives = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] < 0) {
                    negatives += 1;
                }
            }
        }
        return negatives;
    }
};


//Row With Maximum Ones
class Matrix3 {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        int max_row = 0;
        int number_of_ones = 0;
        for (int i = 0; i < n; i++) {
            int count = 0;
            for (int j = 0; j < m; j++) {
                count += mat[i][j];
            }
            if (count > number_of_ones) {
                number_of_ones = count;
                max_row = i;
            }
        }
        return { max_row, number_of_ones };
    }
};


//Lucky Numbers in a Matrix
class Matrix4 {
public:
    vector<int> luckyNumbers(vector<vector<int>>& matrix) {
        int min;
        int max;
        int minimum;
        int maximum;

        vector<int> luckynumbers;
        for (int i = 0; i < matrix.size(); i++) {
            min = 1000000;
            max = -1;
            for (int j = 0; j < matrix[i].size(); j++) {
                if (matrix[i][j] < min) {
                    min = matrix[i][j];
                    minimum = j;
                }
            }
            for (int j = 0; j < matrix.size(); j++) {
                if (matrix[j][minimum] > max) {
                    max = matrix[j][minimum];
                }
            }
            if (max == min) {
                luckynumbers.push_back(min);
            }
        }
        return luckynumbers;
    }
};


//Richest Customer Wealth
class Matrix5 {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int costumer = accounts.size();
        int bank = (costumer > 0) ? accounts[0].size() : 0;
        int maxWealth = 0;
        for (int i = 0; i < costumer; i++) {
            int wealth = 0;
            for (int j = 0; j < bank; j++) {
                wealth += accounts[i][j];
            }
            maxWealth = max(maxWealth, wealth);
        }
        return maxWealth;
    }
};


int main() {
    int choice;
    cout << "Choose a function (1-20): ";
    cin >> choice;

    switch (choice) {
    case 1: {
        cout << "Number of Good Pairs" << endl;
        Array1 arr1;
        int n;
        cout << "Enter the size of the array: ";
        cin >> n;
        vector<int> nums(n);
        cout << "Enter the elements of the array: ";
        for (int i = 0; i < n; i++) {
            cin >> nums[i];
        }
        int result = arr1.numIdenticalPairs(nums);
        cout << "Result: " << result << endl;
        break;
    }
    case 2: {
        cout << "Final Value of Variable After Performing Operations" << endl;
        Array2 arr2;
        int n;
        cout << "Enter the number of operations: ";
        cin >> n;
        vector<string> operations(n);
        cout << "Enter the operations (X++, ++X, X--, --X): ";
        for (int i = 0; i < n; i++) {
            cin >> operations[i];
        }
        int result = arr2.finalValueAfterOperations(operations);
        cout << "Result: " << result << endl;
        break;
    }
    case 3: {
        cout << "Concatenation of Array" << endl;
        Array3 arr3;
        int n;
        cout << "Enter the size of the array: ";
        cin >> n;
        vector<int> nums(n);
        cout << "Enter the elements of the array: ";
        for (int i = 0; i < n; i++) {
            cin >> nums[i];
        }
        vector<int> result = arr3.getConcatenation(nums);
        cout << "Result: ";
        for (int num : result) {
            cout << num << " ";
        }
        cout << endl;
        break;
    }
    case 4: {
        cout << "Create Target Array in the Given Order" << endl;
        Array4 arr4;
        int n;
        cout << "Enter the size of the array: ";
        cin >> n;
        vector<int> nums(n);
        vector<int> index(n);
        cout << "Enter the elements of the array: ";
        for (int i = 0; i < n; i++) {
            cin >> nums[i];
        }
        cout << "Enter the corresponding indices: ";
        for (int i = 0; i < n; i++) {
            cin >> index[i];
        }
        vector<int> result = arr4.createTargetArray(nums, index);
        cout << "Result: ";
        for (int num : result) {
            cout << num << " ";
        }
        cout << endl;
        break;
    }
    case 5: {
        cout << "Count Pairs Whose Sum is Less than Target" << endl;
        Array5 arr5;
        int n, target;
        cout << "Enter the size of the array: ";
        cin >> n;
        vector<int> nums(n);
        cout << "Enter the elements of the array: ";
        for (int i = 0; i < n; i++) {
            cin >> nums[i];
        }
        cout << "Enter the target value: ";
        cin >> target;
        int result = arr5.countPairs(nums, target);
        cout << "Result: " << result << endl;
        break;
    }
    case 6: {
        cout << "Split a String in Balanced Strings" << endl;
        String1 str1;
        string s;
        cout << "Enter the string: ";
        cin >> s;
        int result = str1.balancedStringSplit(s);
        cout << "Result: " << result << endl;
        break;
    }
    case 7: {
        cout << "Defanging an IP Address" << endl;
        String2 str2;
        string address;
        cout << "Enter the IP address: ";
        cin >> address;
        string result = str2.defangIPaddr(address);
        cout << "Result: " << result << endl;
        break;
    }
    case 8: {
        cout << "Jewels and Stones" << endl;
        String3 str3;
        string jewels, stones;
        cout << "Enter the jewels: ";
        cin >> jewels;
        cout << "Enter the stones: ";
        cin >> stones;
        int result = str3.numJewelsInStones(jewels, stones);
        cout << "Result: " << result << endl;
        break;
    }
    case 9: {
        cout << "Goal Parser Interpretation" << endl;
        String4 str4;
        string command;
        cout << "Enter the command: ";
        cin >> command;
        string result = str4.interpret(command);
        cout << "Result: " << result << endl;
        break;
    }
    case 10: {
        cout << "Check If Two String Arrays are Equivalent" << endl;
        String5 str5;
        int n1, n2;
        cout << "Enter the size of word1: ";
        cin >> n1;
        vector<string> word1(n1);
        cout << "Enter the elements of word1: ";
        for (int i = 0; i < n1; i++) {
            cin >> word1[i];
        }
        cout << "Enter the size of word2: ";
        cin >> n2;
        vector<string> word2(n2);
        cout << "Enter the elements of word2: ";
        for (int i = 0; i < n2; i++) {
            cin >> word2[i];
        }
        bool result = str5.arrayStringsAreEqual(word1, word2);
        cout << "Result: " << (result ? "true" : "false") << endl;
        break;
    }
    case 11: {
        cout << "Add Two Integers" << endl;
        Math1 math1;
        int num1, num2;
        cout << "Enter the first number: ";
        cin >> num1;
        cout << "Enter the second number: ";
        cin >> num2;
        int result = math1.sum(num1, num2);
        cout << "Result: " << result << endl;
        break;
    }
    case 12: {
        cout << "Divisible and Non-divisible Sums Difference" << endl;
        Math2 math2;
        int n, m;
        cout << "Enter the value of n: ";
        cin >> n;
        cout << "Enter the value of m: ";
        cin >> m;
        int result = math2.differenceOfSums(n, m);
        cout << "Result: " << result << endl;
        break;
    }
    case 13: {
        cout << "Smallest Even Multiple" << endl;
        Math3 math3;
        int n;
        cout << "Enter the value of n: ";
        cin >> n;
        int result = math3.smallestEvenMultiple(n);
        cout << "Result: " << result << endl;
        break;
    }
    case 14: {
        cout << "Subtract the Product and Sum of Digits of an Integer" << endl;
        Math4 math4;
        int num;
        cout << "Enter the number: ";
        cin >> num;
        int result = math4.subtractProductAndSum(num);
        cout << "Result: " << result << endl;
        break;
    }
    case 15: {
        cout << "Find the Maximum Achievable Number" << endl;
        Math5 math5;
        int num, t;
        cout << "Enter the number: ";
        cin >> num;
        cout << "Enter the value of t: ";
        cin >> t;
        int result = math5.theMaximumAchievableX(num, t);
        cout << "Result: " << result << endl;
        break;
    }
    case 16: {
        cout << "Matrix Diagonal Sum" << endl;
        Matrix1 matrix1;
        int n, m;
        cout << "Enter the size of the matrix: ";
        cin >> n >> m;
        vector<vector<int>> mat(n, vector<int>(m));
        cout << "Enter the elements of the matrix: ";
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> mat[i][j];
            }
        }
        int result = matrix1.diagonalSum(mat);
        cout << "Result: " << result << endl;
        break;
    }
    case 17: {
        cout << "Count Negative Numbers in a Sorted Matrix" << endl;
        Matrix2 matrix2;
        int n, m;
        cout << "Enter the number of rows: ";
        cin >> n;
        cout << "Enter the number of columns: ";
        cin >> m;
        vector<vector<int>> grid(n, vector<int>(m));
        cout << "Enter the elements of the matrix: ";
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        int result = matrix2.countNegatives(grid);
        cout << "Result: " << result << endl;
        break;
    }
    case 18: {
        cout << "Row With Maximum Ones" << endl;
        Matrix3 matrix3;
        int n, m;
        cout << "Enter the number of rows: ";
        cin >> n;
        cout << "Enter the number of columns: ";
        cin >> m;
        vector<vector<int>> mat(n, vector<int>(m));
        cout << "Enter the elements of the matrix: ";
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> mat[i][j];
            }
        }
        vector<int> result = matrix3.rowAndMaximumOnes(mat);
        cout << "Result: Row " << result[0] << ", Number of Ones " << result[1] << endl;
        break;
    }
    case 19: {
        cout << "Lucky Numbers in a Matrix" << endl;
        Matrix4 matrix4;
        int n, m;
        cout << "Enter the number of rows in the matrix: ";
        cin >> n;
        cout << "Enter the number of columns in the matrix: ";
        cin >> m;
        vector<vector<int>> matrix(n, vector<int(m));
        cout << "Enter the elements of the matrix: ";
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> matrix[i][j];
            }
        }
        vector<int> result = math6.luckyNumbers(matrix);
        cout << "Lucky Numbers: ";
        for (int num : result) {
            cout << num << " ";
        }
        cout << endl;
        break;
    }
    case 20: {
        cout << "Richest Customer Wealth" << endl;
        Matrix5 matrix5;
        int customers, banks;
        cout << "Enter the number of customers: ";
        cin >> customers;
        cout << "Enter the number of banks: ";
        cin >> banks;
        vector<vector<int>> accounts(customers, vector<int>(banks));
        cout << "Enter the balances for each customer and bank: ";
        for (int i = 0; i < customers; i++) {
            for (int j = 0; j < banks; j++) {
                cin >> accounts[i][j];
            }
        }
        int result = matrix5.maximumWealth(accounts);
        cout << "Maximum Wealth: " << result << endl;
        break;
    }
    default:
        cout << "Invalid choice." << endl;
    }

    return 0;
}