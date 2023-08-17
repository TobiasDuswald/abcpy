#include <iostream>
#include <random>

using namespace std;

// Simulation function of the gaussian model
void gaussian_model(double* result, unsigned int k, double mu, double sigma, int seed) {
  std::mt19937 generator(static_cast<long unsigned int>(time(0)));
  std::normal_distribution<double> distribution(mu, sigma);

  for (int i = 0; i < k; ++i)
  {
    result[i] = distribution(generator);
  }
}

// main function to run the simulation of the Gaussian model
int main()
{
  int k = 10;
  double samples[k];
  gaussian_model(samples, k, 0.0, 1.0, 1);

  for (int i = 0; i < k; ++i)
  {
    std::cout << samples[i] << " ";
    std::cout << std::endl;
  }

  return 0;
}
