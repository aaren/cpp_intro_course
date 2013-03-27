#include <vector>
#include <iostream>

class Dataset
{
  public:
    Dataset(std::istream&);
    double mean() const;
    double median() const;
    double std_dev() const;

  private:
    std::vector<double> data;
};
