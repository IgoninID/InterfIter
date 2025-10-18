#pragma once

/// <summary>
/// Абстрактный класс итератора
/// </summary>
/// <typeparam name="T">Тип элементов, по которым будет проходить итератор</typeparam>
template <typename T>
class AbstrIter
{
public:

	/// <summary>
	/// Виртуальный деструктор
	/// default - генерирует пустой деструктор автоматически
	/// </summary>
	virtual ~AbstrIter() = default;

	/// <summary>
	/// Префиксный инкремент
	/// </summary>
	/// <returns>Ссылка на сам итератор</returns>
	virtual AbstrIter& operator ++() = 0;

	/// <summary>
	/// Разыименование итератора - доступ к текущему элементу
	/// </summary>
	/// <returns>Ссылка на элемент, на который указывает итератор</returns>
	virtual T& operator *() const = 0;

	/// <summary>
	/// Проверка на неравенство итераторов
	/// </summary>
	/// <param name="other">Другой итератор</param>
	/// <returns>1 - указывают на разные элементы, 0 - указывают на один и тот же элемент</returns>
	virtual bool operator !=(const AbstrIter& other) const = 0;
};