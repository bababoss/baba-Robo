#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"
#include iostream

using namespace std;
using namespace cv;
int main()
{
          // Camera 
     VideoCaptue cap(0);
      //if fail to open camera
     if(!capOpened)
	{
	cout << "Error in open camera" << endl;
	return -1;
	}
     //Create a window
     namedWindow("Frame", 1);
       while(true)
	{
	  //Video frame read
          Mat frame;
          bool bSuccess cap.read(frame);
	  if(!bSuccess)
	  {
	  return -1;
	  }

          //show the video
          imshow("Frame", frame);
          // Wait until user press some key
          waitKey(0);	
	}
      return 0;

}
