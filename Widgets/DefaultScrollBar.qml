import QtQuick 2.15
import QtQuick.Controls 2.15

ScrollBar {
    id: control
    size: 0.4
    active: true
    hoverEnabled: true

    contentItem: Rectangle {
        width: control.width
        height: control.height
        radius: width / 2
        color: control.pressed || control.hovered ? "#3D3D3D" : "#454545"
    }

    background: Rectangle {
        width: control.width
        height: control.height
        radius: width / 2
        color: "#7A7A7A"
    }
}
