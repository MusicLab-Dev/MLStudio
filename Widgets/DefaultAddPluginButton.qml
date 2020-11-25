import QtQuick 2.15
import QtQuick.Controls 2.15

Button {
    id: control
    hoverEnabled: true
    enabled: true // to test disable component

    background: Rectangle {
        width: control.width
        height: control.height
        color: control.pressed ? "#223B50" : control.hovered ? "#394F61" : "#546776"
        radius: width / 11
    }

    indicator: Canvas {
        id: canvas
        anchors.verticalCenter: parent.verticalCenter
        anchors.right: parent.right
        anchors.rightMargin: comboBoxText.leftPadding / 2
        width: height
        height: control.height / 2
        contextType: "2d"

        onPaint: {
            context.reset();
            context.moveTo(0, 0);
            context.lineTo(width, 0);
            context.lineTo(width / 2, height);
            context.closePath();
            context.fillStyle = control.pressed ? "#31A8FF" : control.hovered ? "#31A8FF" : "#295F8B";
            context.fill();
        }

        Connections {
            target: control
            function onPressedChanged() { canvas.requestPaint() }
            function onHoveredChanged() { canvas.requestPaint() }
        }
    }

}
