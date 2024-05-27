#include <iostream>
#include <vector>

using std::vector;

class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        std::vector<int> res;
        // std::vector<int>::iterator it = asteroids.begin(); 
        for (std::vector<int>::iterator it = asteroids.begin(); it < asteroids.end() ; it++){
            if(*it > *(it + 1) && *it - *(it + 1) != 0){
                res.push_back(*it);
                it++;
            }
            else if(*it - *(it + 1) == 0)
                it++;
            else 
                res.push_back(*it);
        }
        std::cout << "RESULT" << std::endl;
        for (std::vector<int>::iterator i = res.begin(); i< res.end(); i++){
            std::cout << *i << std::endl;
        }
    return res;
    }
};

int main(){
    Solution solution;
    std::vector<int> vect = {5,10,-5};
    std::vector<int> vecty = {5,-5};
    solution.asteroidCollision(vect);
    solution.asteroidCollision(vecty);
}