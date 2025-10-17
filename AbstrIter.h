#pragma once

template <typename T>
class AbstrIter
{
public:
	virtual ~AbstrIter() = default;

	virtual AbstrIter& operator ++() = 0;

	virtual T& operator *() const = 0;

	virtual bool operator !=(const AbstrIter& other) const = 0;
};