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
	HLACCalculator(std::string input_path, std::shared_ptr<std::vector<cv::Rect>> calc_area);

	std::vector<std::pair<cv::Rect, std::vector<int>>> get_result();
	std::string get_result_string();
	void get_result_file(std::string filepath);

private:
	cv::Mat input_mat;
	std::shared_ptr<std::vector<cv::Rect>> calc_area;

	cv::Mat get_mat_from_file(string filename);
};