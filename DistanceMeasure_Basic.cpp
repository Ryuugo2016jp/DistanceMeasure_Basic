// Base_CV2.4.13.cpp : アプリケーションのエントリ ポイントを定義します。
//

#include "stdafx.h"
#include "opencv2\opencv.hpp"

int main()
{
	cv::Point2i point1_old;
	cv::Point2i point2_old;

	cv::Point2i point1_new;
	cv::Point2i point2_new;

	double dist_old, dist_new;


	char key;
	int n;


	std::cout << "Input Pairs on 1st Image" << std::endl;
	std::cout << "y of Point1 ? " << std::endl;
	std::cin >> point1_old.y;
	std::cout << "y of Point2 ? " << std::endl;
	std::cin >> point2_old.y;
	std::cout << "Dist [m] ? " << std::endl;
	std::cin >> dist_old;

	std::cout << "Input Pairs on 2nd Image" << std::endl;
	std::cout << "y of Point1 ? " << std::endl;
	std::cin >> point1_new.y;
	std::cout << "y of Point2 ? " << std::endl;
	std::cin >> point2_new.y;


	dist_new = dist_old * abs(point2_old.y - point1_old.y)/ abs(point2_new.y - point1_new.y);
	std::cout << "Distance: " << dist_new << "[m]" << std::endl;



    return 0;
}

