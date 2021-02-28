#include <iostream>
#include <cmath>
using namespace std;
typedef long long ll;
ll a1[1000000], a2[1000000], a3[1000000];
void findCommon(ll a1[], ll a2[], ll a3[], ll n1, ll n2, ll n3)
{
    ll i = 0, j = 0, k = 0;

    while (i < n1 && j < n2 && k < n3)
    {
        if (a1[i] == a2[j] && a2[j] == a3[k])
        {
            cout << a1[i] << " ";   
            i++; 
            j++; 
            k++;
        }
        else if (a1[i] < a2[j])
            i++;
        else if (a2[j] < a3[k])
            j++;
        else
            k++;
    }
    if (i == n1 && j == n2 && k == n3) {
        cout << -1;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--) {
        ll n1, n2, n3;
        cin >> n1 >> n2 >> n3;
        
        for (ll i = 0; i < n1; i++) {
            cin >> a1[i];
        }
        for (ll j = 0; j < n2; j++) {
            cin >> a2[j];
        }
        for (ll k = 0; k < n3; k++) {
            cin >> a3[k];
        }
        findCommon(a1, a2, a3, n1, n2, n3);
        cout << endl;
    } 
    return 0;
}