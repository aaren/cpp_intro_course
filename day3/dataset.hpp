#include <vector>
#include <iostream>

class Dataset
{
  public:
    Dataset(std::istream&);
    double mean() const;
    double median() const;

  private:
    std::vector<double> data;
};
