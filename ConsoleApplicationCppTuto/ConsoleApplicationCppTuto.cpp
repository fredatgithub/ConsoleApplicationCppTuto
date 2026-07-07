/*
 * Copyright (C) 2026 Freddy Juhel
 *
 * Licensed under the MIT License.
 */

#include <iostream>
#include <locale>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <climits>

using namespace std;

static long long SommeDe1AN(int n)
{
	return static_cast<long long>(n) * (n + 1) / 2;
}

// Returns sum of first n natural numbers
static int SumOfFirstNNumbers(int n)
{
	int sum = 0;
	for (int i = 1; i <= n; i++)
		sum = sum + i;
	return sum;
}

static unsigned long long Factorial(unsigned int n)
{
	unsigned long long resultat = 1;

	for (unsigned int i = 2; i <= n; ++i)
	{
		resultat *= i;
	}

	return resultat;
}

static unsigned long long FactorialRecursive(unsigned int n)
{
	if (n <= 1)
	{
		return 1;
	}

	return n * FactorialRecursive(n - 1);
}

static int FactorialTernary(int n)
{
	// Single line to find factorial
	return ((n == 1 || n == 0) ? 1 : n * FactorialTernary(n - 1));
}

// Iterative function to reverse digits of num
static int reverseDigits(int num)
{
	int rev_num = 0;
	while (num > 0) {
		rev_num = rev_num * 10 + num % 10;
		num = num / 10;
	}

	return rev_num;
}

static string FormatNumber(long long nombre, char separateur = ' ')
{
	string s = to_string(nombre);

	for (int i = static_cast<int>(s.size()) - 3; i > 0; i -= 3)
	{
		s.insert(i, 1, separateur);
	}

	return s;
}

static int GreatestCommonDivisor(int a, int b) {
	if (a == 0)
		return b;
	if (b == 0)
		return a;
	if (a == b)
		return a;
	if (a > b)
		return GreatestCommonDivisor(a - b, b);

	return GreatestCommonDivisor(a, b - a);
}

// Function to return gcd of a and b
static int FindGreatestCommonDivisor(int a, int b) {
	if (a == 0)
		return b;
	return FindGreatestCommonDivisor(b % a, a);
}

#include <numeric>

static bool AreCoprime(int a, int b)
{
	return gcd(a, b) == 1;
}

static vector<vector<int>> findTriplets(vector<int>& arr) {
	vector<vector<int>> res;
	int n = arr.size();

	// Generating all triplets
	for (int i = 0; i < n - 2; i++) {
		for (int j = i + 1; j < n - 1; j++) {
			for (int k = j + 1; k < n; k++) {
				// If the sum of a triplet equals to zero
				// then add it's indices to the result
				if (arr[i] + arr[j] + arr[k] == 0)
					res.push_back({ i, j, k });
			}
		}
	}
	return res;
}

static int FindGreatestPairSum(vector<int>& arr)
{
	int maxSum = INT_MIN;
	int n = arr.size();
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			int sum = arr[i] + arr[j];
			if (sum > maxSum) {
				maxSum = sum;
			}
		}
	}
	return (maxSum == INT_MIN) ? -1 : maxSum;
}

void main()
{
	cout << "C++ application\n";
	cout << "La somme des nombres de 1 a 10 est " << SommeDe1AN(10) << endl; // 55
	cout << "La factorielle de 5 est " << Factorial(5) << endl; // 120
	cout << "La factorielle recursive de 5 est " << FactorialRecursive(5) << endl; // 120
	cout << "La factorielle de 20 est " << FormatNumber(Factorial(20)) << endl; // 24 329 020 081 766 400 000
	cout << "La factorielle de 20 est " << FormatNumber(FactorialRecursive(20)) << endl; // 24 329 020 081 766 400 000
	cout << "La chaine inverse de 123456 est " << reverseDigits(123456) << endl; // 654321
	cout << "Le plus grand commun diviseur de 48 et 18 est " << GreatestCommonDivisor(48, 18) << endl; // 6
	cout << "8 et 15 sont-ils premiers entre eux ? " << (AreCoprime(8, 15) ? "Oui" : "Non"); // Oui
	cout << " car ils n'ont que 1 comme diviseur commun." << endl;
	cout << "12 et 18 sont-ils premiers entre eux ? " << (AreCoprime(12, 18) ? "Oui" : "Non"); // Non
	cout << " car ils ont plus d'un diviseur commun: 1 et " << FindGreatestCommonDivisor(12, 18) << endl;
	cout << "Triplets ayant une somme nulle :" << endl;
	cout << "trois boucles imbriquées" << endl;
	cout << "Indices des triplets (i, j, k) dont la somme est nulle :" << endl;
	cout << "tableau : { 0, -1, 2, -3, 1 }" << endl;

	vector<int> arr = { 0, -1, 2, -3, 1 };
	vector<vector<int>> res = findTriplets(arr);
	for (int i = 0; i < res.size(); i++)
		cout << res[i][0] << " " << res[i][1] << " " << res[i][2] << endl;

	vector<int> arr2 = { 0, 1, 2, 3, 12, 15, 65, 11, 2, 3, 4, 5, 6 };
	cout << "tableau : { 0, 1, 2, 3, 12, 15, 65, 11, 2, 3, 4, 5, 6 }" << endl;
	cout << "La somme du plus grand couple de deux nombres est " << FindGreatestPairSum(arr2) << endl; // 80
}
