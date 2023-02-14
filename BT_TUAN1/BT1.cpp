#include <opencv2/opencv.hpp>
#include <stdio.h>
#include <fstream>
#include <math.h>
using namespace cv;
using namespace std;
int main()
{
    // ofstream fhand("Hand.txt");
    // ofstream fnohand("NoHand.txt");

    Mat BackGround = imread("NoHand.png");
    Mat Hand = imread ("Hand.png");
    resize(Hand,Hand,Size(600,420),INTER_LINEAR);
    resize(BackGround,BackGround,Size(600,420),INTER_LINEAR);
    Mat diffImage,final;
    absdiff(Hand,BackGround,diffImage);
    Mat Mask = Mat::zeros(diffImage.rows,diffImage.cols,CV_8UC1);
    float threshold_0 = 30.0f;
    
    for(int i = 0 ; i < diffImage.rows; ++i)
        for (int j = 0 ; j < diffImage.cols ; ++j )
        {
            Vec3b pix = diffImage.at<Vec3b>(i,j);
            if(sqrt(pix[0]*pix[0]+pix[1]*pix[1]+pix[2]*pix[2]) > threshold_0)
                Mask.at<unsigned char>(i,j) = 255;

        }
    ofstream fo("Diff.txt");
    fo <<"DIff"<< diffImage<<endl;
    fo <<"MASK"<<Mask <<endl;
    cvtColor(diffImage,final ,COLOR_RGB2GRAY);
    threshold(final,final,0,255,0);
    // imshow("final",final);
    imshow("mask",Mask);
    waitKey(0);
    // fnohand << "BackGround" <<BackGroundImage<<endl;
    // fhand << "Hand"<<Hand<<endl;
    // fhand.close();
    // fnohand.close();
}
