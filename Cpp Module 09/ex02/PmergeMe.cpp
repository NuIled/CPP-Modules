#include "PmergeMe.hpp"
unsigned long str_to_num(std::string &num);
template<typename Cont>
static void merge(Cont &arry,Cont &left, Cont &right)
{
    int left_size = left.size();
    int right_size = right.size();
    int i = 0, j = 0, n = 0;

    while (j < left_size && n < right_size) 
    {
        if (left[j] < right[n]) {
            arry[i] = left[j];
            j++;
        }
        else {
            arry[i] = right[n];
            n++;
        }
        i++;
    }
    while (j < left_size) {
        arry[i] = left[j];
        j++; i++;
    }
    while (n < right_size) {
        arry[i] = right[n];
        n++; i++;
    }
}

template<typename Cont >
static void mergeSort(Cont &arry) {
	if (arry.size() <= 1)
        return;
    int mid = (arry.size()) / 2;
	Cont left(arry.begin(),(arry.begin() +mid));
	Cont right((arry.begin() + mid),arry.end());
    mergeSort(left);
    mergeSort(right);
	merge(arry,left,right);
}

PmergeMe::PmergeMe(char ** av,int ac){
    std::vector<unsigned long> vect;
    std::chrono::steady_clock::time_point start;
    std::chrono::steady_clock::time_point end;
    std::chrono::milliseconds duration;
    for (int i = 1; i < ac; i++)
    {
        std::string str(av[i]);
        if(str.find_first_not_of("0123456789+ ") == std::string::npos && !str.empty())
            vect.push_back(str_to_num(str));
        else
            throw std::runtime_error("Error");
        str.clear();
    }
    std::deque<unsigned long>vec(vect.begin(),vect.end());
    std::cout << "Before:";
    for (std::vector<unsigned long>::iterator it = vect.begin(); it != vect.end(); ++it) {
        std::cout << *it << " ";
    } 
    std::cout << '\n';
    
    start = std::chrono::steady_clock::now();
    mergeSort(vect);
    end = std::chrono::steady_clock::now();
    
    std::cout << "After:";
    for (std::vector<unsigned long>::iterator it = vect.begin(); it != vect.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << '\n';

    duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
    
    std::cout << "Time to process a range of "<< vect.size() <<" elements with std::vector : ";
    std::cout << std::fixed;

    float d = static_cast<float>(duration.count());

    std::cout << d << " us" <<'\n';

    start = std::chrono::steady_clock::now();
    mergeSort(vec);
    end = std::chrono::steady_clock::now();
   
    duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
    
    d = static_cast<float>(duration.count());

    std::cout << "Time to process a range of "<< vect.size() <<" elements with std::deque : ";

    std::cout << d << " us" <<'\n';
}
PmergeMe::~PmergeMe(){}
PmergeMe::PmergeMe(const PmergeMe& other)
{(void)other;}
PmergeMe&  PmergeMe::operator=(const PmergeMe& other)
{   
    (void)other;
    return *this;
}

