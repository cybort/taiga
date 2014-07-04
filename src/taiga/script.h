/*
** Taiga
** Copyright (C) 2010-2014, Eren Okka
** 
** This program is free software: you can redistribute it and/or modify
** it under the terms of the GNU General Public License as published by
** the Free Software Foundation, either version 3 of the License, or
** (at your option) any later version.
** 
** This program is distributed in the hope that it will be useful,
** but WITHOUT ANY WARRANTY; without even the implied warranty of
** MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
** GNU General Public License for more details.
** 
** You should have received a copy of the GNU General Public License
** along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef TAIGA_TAIGA_SCRIPT_H
#define TAIGA_TAIGA_SCRIPT_H

#include <string>

namespace anime {
class Episode;
}

void ExecuteAction(std::wstring action, WPARAM wParam = 0, LPARAM lParam = 0);

std::wstring EvaluateFunction(const std::wstring& func_name, const std::wstring& func_body);

bool IsScriptFunction(const std::wstring& str);
bool IsScriptVariable(const std::wstring& str);

std::wstring ReplaceVariables(std::wstring str,
                              const anime::Episode& episode,
                              bool url_encode = false,
                              bool is_manual = false,
                              bool is_preview = false);

std::wstring EscapeScriptEntities(const std::wstring& str);
std::wstring UnescapeScriptEntities(const std::wstring& str);

#endif  // TAIGA_TAIGA_SCRIPT_H