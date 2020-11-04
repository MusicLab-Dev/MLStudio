import QtQuick 2.15
import QtQuick.Controls 2.15

ComboBox {
    id: comboBox
    font.pixelSize: .025 * parent.height

    model: ["Popcorn","Candy"]

    background: Rectangle {
        color: "#A0000000"
        border.color: comboBox.pressed ? "#C0C0C0" : "#FFFFFF"
        border.width: comboBox.visualFocus ? 2 : 1
        radius: 30
    }

    contentItem: Text {
        text: parent.displayText
        font: parent.font
        color: parent.pressed ? "#C0C0C0" : "#FFFFFF"
        horizontalAlignment: Text.AlignHCenter
        verticalAlignment: Text.AlignVCenter
        elide: Text.ElideRight
    }
}
