import QtQuick 2.15
import QtQuick.Controls 2.15

Button {
    id: control
    text: "+ NOUVEAU WORKSPACE"
    hoverEnabled: true
    enabled: true // to test disable component

    contentItem: Text {
         text: control.text
         font: control.font
         opacity: enabled ? 1.0 : 0.3
         color: control.pressed ? "#31A8FF" : control.hovered ? "#1F6CA5" : control.enabled ? "#B9C2CA" : "#778998"
         elide: Text.ElideRight
     }

    background: Rectangle {
        width: control.width
        height: control.height
    }
}
