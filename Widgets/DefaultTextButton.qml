import QtQuick 2.15
import QtQuick.Controls 2.15

Button {
    id: control
    hoverEnabled: true

    contentItem: Text {
         text: control.text
         font: control.font
         color: control.pressed ? "#31A8FF" : control.hovered ? "#1F6CA5" : control.enabled ? "#B9C2CA" : "#778998"
         elide: Text.ElideRight
         verticalAlignment: Qt.AlignVCenter
         horizontalAlignment: Qt.AlignHCenter
     }

    background: Item {}
}
