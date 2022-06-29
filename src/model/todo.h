/**=============================================================================+
 * file name: todo.h
 * created  : 2022.05.07
 * author   : sam
 * copyright: Copyright(C) I3D Technology Inc. All rights reserved.
+=============================================================================*/
#pragma once

#include <string>

namespace todo {

class Todo
{
public:
	Todo(const std::wstring& title) :
		title_(title)
	{}

	virtual ~Todo() = default;

	auto Title() const { return title_; }
	void Title(const std::wstring& title) { title_ = title; }

	auto Completed() const { return completed_; }
	void Complete(bool completed) { completed_ = completed; }

	auto Editing() const { return editing_; }
	void Editing(bool editing) { editing_ = editing; }

private:
	bool completed_	= false;
	bool editing_ = false;
	std::wstring title_;
};

} // namespace 'i3d'

