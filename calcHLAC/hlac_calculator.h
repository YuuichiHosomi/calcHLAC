//OpenCV�p�C���N���[�h��
//�C���N���[�h�t�@�C���w��
#include <opencv2/opencv.hpp>
//�ÓI�����N���C�u�����̎w��
#include <opencv2/opencv_lib.hpp>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>

#include<string>
#include<memory>

class HLACCalculator
{
public:
	HLACCalculator(std::string input_path, std::shared_ptr<std::vector<cv::Rect>> calc_point);

	std::vector<int> get_result();
	std::string get_result_string();
	void get_result_file(std::string filepath);
};