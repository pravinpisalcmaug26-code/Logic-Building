
#include <iostream>
#include <string>
#include <vector>
#include <utility>

using namespace std;


enum class HttpStatus
{
    OK = 200,
    Created = 201,
    BadRequest = 400,
    Unauthorized = 401,
    NotFound = 404,
    ServerError = 500
};

void handleResponse(HttpStatus status, const string& endpoint)
{
    cout << "[" << endpoint << "] -> ";

    switch (static_cast<int>(status))
    {
        case 200:
            cout << "200 OK : Request successful";
            break;

        case 201:
            cout << "201 Created : Resource created successfully";
            break;

        case 400:
            cout << "400 Bad Request : Invalid request";
            break;

        case 401:
            cout << "401 Unauthorized : Authentication required";
            break;

        case 404:
            cout << "404 Not Found : Endpoint does not exist";
            break;

        case 500:
            cout << "500 Server Error : Internal server error - retry later";
            break;

        default:
            cout << "Unknown HTTP status";
    }

    cout << endl;
}




using Header = pair<string, string>;
using HeaderList = vector<Header>;
using Port = unsigned int;
using IPAddress = string;

typedef unsigned long long RequestId;

void printHeaders(const HeaderList& headers)
{
    cout << "Headers:" << endl;

    for (const Header& header : headers)
    {
        cout << header.first << " : " << header.second << endl;
    }
}

int main()
{
    
    handleResponse(HttpStatus::OK, "GET /api/users");
    handleResponse(HttpStatus::Unauthorized, "POST /api/login");
    handleResponse(HttpStatus::NotFound, "GET /api/products/99");
    handleResponse(HttpStatus::ServerError, "POST /api/order");

    cout << endl;


    

    HeaderList headers =
    {
        {"Content-Type", "application/json"},
        {"Authorization", "Bearer eyJhbGci..."},
        {"Accept-Language", "en-US"}
    };

    Port serverPort = 8080;

    RequestId requestId = 1748293847;

    IPAddress serverIP = "192.168.1.10";

    cout << "Request ID  : " << requestId << endl;
    cout << "Server Port : " << serverPort << endl;
    cout << "Server IP   : " << serverIP << endl;

    printHeaders(headers);

    return 0;
}