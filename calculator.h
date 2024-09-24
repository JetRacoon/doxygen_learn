/*****************************************************************//**
 * \file   calculator.h
 * \brief  ������ ���� �������� � ���� �������� �������
 * 
 * ,������� ������������ � ���������������� ���������
 * 
 * 
 * \author Oleg
 * \date   September 2024
 *********************************************************************/

/// <summary>
/// ����� ��������� ��� ������� diff()
/// </summary>
typedef enum {
	LESS = 0,	///< ���� ��� ������ �������� ��������
	MORE		///< ���� ��� ������ �������� ��������
}diffMode_t;


/**
 * \defgroup someGroup ��������� ������ 
 * \brief �������� ��������� ������
 */

/**
 * \brief ����� Calculator
 * 
 * \author ���� ������
 * \version 0.1
 * \date 23 �������� 2024
 * \warning ������ ����� ������ � ���������������� ����� 
 */
class Calculator
{	
public:
	/**
	 * \brief ����������� ������
	 * 
	 * ������������� ������ Calculator
	 */
	Calculator(); 
	~Calculator();	
	
	/**
	 * ������ �������� ������� � ������� ��������� ������
	 * \param[in] fnum ������ ����� 
	 * \param[in] snum ������ �����
	 */
	void setNums(int fnum, int snum);

	/**
	 * 
	 * \return ������ ����� 
	 * \throw -1 � ������ ���� Fnum ������ 10
	 */
	int getFnum();
	
	/**
	*
	* \return ������ �����
	* \throw -1 � ������ ���� Fnum ������ 30
	*/
	int getSnum();

private:
	int fnum_;
	int snum_;
};

/**
 * \brief �������� ����� �� ������ Calculator
 * \author ����� �����
 * \date �������� ������ 2077
 */
class Summator :public Calculator {
public:
	Summator();
	~Summator();

	/**
	 * \brief ����� ���� �����
	 * 
	 * \return ����� ���� ����� ������
	 */
	int sum();
private:
	int fnum_;	
	int snum_;
};

/**
 * \addtogroup someGroup Comparator
 * @{
 */
/**
 * \brief �������� ����� �� ������ Calculator
 * \author ����������
 * \date ��� ��������
 */
class Comparator :public Calculator {
public:
	Comparator();
	~Comparator();

	/**
	 * \brief ��������� �����
	 * \todo ����������� ������� �������� �����
	 * \returns ������� �����, ���� mode = MORE; ������� �����, ���� mode = LESS
	 */
	int diff(diffMode_t mode);
private:
	int fnum_;
	int snum_;
};

///@} 


/**
 * \brief �������� ����� �� ������ Summator
 * 
 * ������������ ������������ ���� �����
 * \author ����� �����
 * \date �������� ������ 2077
 */
class Multiplier :public Summator {
public:
	Multiplier();
	~Multiplier();

	/**
	 * \brief ����� ���� �����
	 *
	 * \return ����� ���� ����� ������
	 */
	int multip();
private:
	int fnum_;
	int snum_;
};
