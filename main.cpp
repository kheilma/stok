#include <stdio.h>
#include <conio.h>


string fetchData(string url) {
    System.Net.WebClient wc = new System.Net.WebClient();
    byte[] raw = wc.DownloadData(url);
    
    string data = System.Text.Encoding.UTF8.GetString(raw);
    }
    
    void main() {
        string read;
        read = fetchData("http://www.foxnews.com/sports/2016/06/10/fans-from-around-world-bid-final-farewell-to-muhammad-ali.html");
        cout << read << "\n";
    }