#include <stdio.h>
#include <curlpp/cURLpp.hpp>
#include <curlpp/Options.hpp>
#include <string>
#include <cstring>
using namespace std;


string fetchData(string url) {
    curlpp::Cleanup myCleanup;
    std::ostringstream os;
    os << curlpp::options::Url(string(url));
    string completed = os.str();
}
    
    void main() {
        string read;
        read = fetchData("http://www.foxnews.com/sports/2016/06/10/fans-from-around-world-bid-final-farewell-to-muhammad-ali.html");
        cout << read << "\n";
    }

