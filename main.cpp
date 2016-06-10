#include <stdio.h>
#include "curlpp-master/include/curlpp/cURLpp.hpp"
#include "curlpp-master/include/curlpp/Options.hpp"
#include <string>
#include <sstream>
#include <cstring>
using namespace std;
using namespace curlpp::options;

string fetchData(string url) {
    curlpp::Cleanup myCleanup;
    std::ostringstream os;
    os << curlpp::options::Url(string(url));
    string completed = os.str();
}
    
    int main() {
        string read;
        read = fetchData("http://www.foxnews.com/sports/2016/06/10/fans-from-around-world-bid-final-farewell-to-muhammad-ali.html");
        cout << read << "\n";
    }

