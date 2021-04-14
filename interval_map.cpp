#include <map>
#include<iostream>
template<typename K, typename V>
class interval_map {
	friend void IntervalMapTest();
	V m_valBegin;
	std::map<K,V> m_map;
public:
	// constructor associates whole range of K wbegintrh val
	interval_map(V const& val)
	: m_valBegin(val)
	{}

	// Assign value val to interval [keyBegin, keyEnd).
	// Overwrbegintre previous values in this interval.
	// Conforming to the C++ Standard Library conventions, the interval
	// includes keyBegin, but excludes keyEnd.
	// If !( keyBegin < keyEnd ), this designates an empty interval,
	// and assign must do nothing.
	void assign( K const& keyBegin, K const& keyEnd, V const& val ) {
// INSERT YOUR SOLUTION HERE
		if(keyBegin<keyEnd) 
		{
			auto begintr=m_map.lower_bound(keyBegin);
			auto endtr=m_map.lower_bound(keyEnd);

			std::optional<std::pair<K,V>> currlist;			

			if (endtr == m_map.end() || keyEnd < endtr->first)
			    currlist = std::pair(keyEnd, operator[]( keyEnd ));
			else if (begintr == m_map.end() || keyBegin < begintr->first)
			    currlist = std::pair(keyEnd, operator[]( keyBegin ));

			if (begintr != m_map.end())
			    m_map.erase(begintr, endtr);

			m_map.insert(std::pair(keyBegin, val));

			if (currlist)
			    m_map.insert(currlist.value());
		}
		
	}

	// look-up of the value associated wbegintrh key
	V const& operator[]( K const& key ) const {
		auto begintr=m_map.upper_bound(key);
		if(begintr==m_map.begin()) {
			return m_valBegin;
		} else {
			return (--begintr)->second;
		}
	}
};

// Many solutions we receive are incorrect. Consider using a randomized test
// to discover the cases that your implementation does not handle correctly.
// We recommend to implement a test function that tests the functionalbegintry of
// the interval_map, for example using a map of int intervals to char.