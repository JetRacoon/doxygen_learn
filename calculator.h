/*****************************************************************//**
 * \file   calculator.h
 * \brief  Данный файл содержит в себе описание классов
 * 
 * ,которые используются в демонстрационной программе
 * 
 * 
 * \author Oleg
 * \date   September 2024
 *********************************************************************/

/// <summary>
/// Набор состояний для функции diff()
/// </summary>
typedef enum {
	LESS = 0,	///< Флаг для поиска меньшего элемента
	MORE		///< Флаг для поиска большего элемента
}diffMode_t;


/**
 * \defgroup someGroup Отдельная группа 
 * \brief Описание отдельной группы
 */

/**
 * \brief Класс Calculator
 * 
 * \author Вася Пупкин
 * \version 0.1
 * \date 23 Сентября 2024
 * \warning Данный класс создан в демонстрационных целях 
 */
class Calculator
{	
public:
	/**
	 * \brief конструктор класса
	 * 
	 * Инициализация класса Calculator
	 */
	Calculator(); 
	~Calculator();	
	
	/**
	 * Задать значения первого и второго параметра класса
	 * \param[in] fnum первое число 
	 * \param[in] snum второе число
	 */
	void setNums(int fnum, int snum);

	/**
	 * 
	 * \return первое число 
	 * \throw -1 В случае если Fnum больше 10
	 */
	int getFnum();
	
	/**
	*
	* \return второе число
	* \throw -1 В случае если Fnum больше 30
	*/
	int getSnum();

private:
	int fnum_;
	int snum_;
};

/**
 * \brief Дочерний класс от класса Calculator
 * \author Пупок Васин
 * \date Холодный апрель 2077
 */
class Summator :public Calculator {
public:
	Summator();
	~Summator();

	/**
	 * \brief Сумма двух чисел
	 * 
	 * \return сумму двух чисел класса
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
 * \brief Дочерний класс от класса Calculator
 * \author неизвестен
 * \date без названия
 */
class Comparator :public Calculator {
public:
	Comparator();
	~Comparator();

	/**
	 * \brief Сравнение чисел
	 * \todo Реализовать функцию сранения чисел
	 * \returns большее число, если mode = MORE; меньшее число, если mode = LESS
	 */
	int diff(diffMode_t mode);
private:
	int fnum_;
	int snum_;
};

///@} 


/**
 * \brief Дочерний класс от класса Summator
 * 
 * Осуществляет перемножение двух чисел
 * \author Пупок Васин
 * \date Холодный апрель 2077
 */
class Multiplier :public Summator {
public:
	Multiplier();
	~Multiplier();

	/**
	 * \brief Сумма двух чисел
	 *
	 * \return сумму двух чисел класса
	 */
	int multip();
private:
	int fnum_;
	int snum_;
};
