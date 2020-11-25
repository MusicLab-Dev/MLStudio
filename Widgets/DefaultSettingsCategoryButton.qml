import QtQuick 2.15
import QtQuick.Controls 2.15

Button {
    id: control
    hoverEnabled: true
    enabled: true // to test disable component
    text: "File"

    background: Rectangle {
        width: control.width
        height: control.height
        border.width: control.pressed ? (height / 10) : control.hovered ? (height / 12) : 0
        border.color: control.pressed ? "#31A8FF" : control.hovered ? "#0D86CB" : ""
        color: "#001E36"
        radius: width / 17
    }

    contentItem: Text {
        width: control.width - control.background.width
        height: control.height
        verticalAlignment: Text.AlignVCenter
        horizontalAlignment: Text.AlignHCenter
        text: control.text
        font: control.font
        color: control.pressed ? "#31A8FF" : control.hovered ? "#0D86CB" : "#295F8B"
        elide: elideText ? Text.ElideRight : Text.ElideNone
    }


    indicator: Image {
        width: control.width / 7
        height: control.height / 2
        x: control.width / 12
        y: (control.height - height) / 2
        source: "qrc:/settings_category_icon_button.png"
    }
}
