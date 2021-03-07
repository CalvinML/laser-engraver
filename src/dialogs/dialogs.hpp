#pragma once

#include <src/gcode-generator.hpp>

#include <memory>

class QWidget;
class QString;
class QProgressDialog;

namespace dialogs {
[[nodiscard]] auto wait_connect_engraver() -> std::unique_ptr<QProgressDialog>;
[[nodiscard]] auto add_dialog_layer(const QString &title, const QString &text, upload_instruction &&interpreter) -> upload_instruction;
[[nodiscard]] auto ask_about_cancel(QWidget *) -> bool;
[[nodiscard]] auto ask_repeat_workspace_preview(QWidget *) -> int;
auto ask_gcode_file(QWidget *parent, std::function<void(QString &&path)> &&) -> void;
auto warn_empty_workspace(QWidget *) -> void;
} // namespace dialogs
