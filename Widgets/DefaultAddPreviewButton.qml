import QtQuick 2.15
import QtQuick.Controls 2.15

Button {
    id: control
    hoverEnabled: true
    enabled: true // to test disable component

    indicator: Canvas {
        id: canvas
        anchors.verticalCenter: parent.verticalCenter
        width: height
        height: control.height / 2
        contextType: "2d"

        onPaint: {
            var ctx = getContext("2d")

            ctx.strokeStyle = control.pressed || control.hovered ? "#31A8FF" : "#0D2D47"
            ctx.lineWidth = control.background.border.width;
            ctx.beginPath();
            ctx.moveTo(width, 0);//start point
            ctx.lineTo(width, 20);
            ctx.stroke();
            ctx.beginPath();
            ctx.fillStyle = "red"


        }

        Connections {
            target: control
            function onPressedChanged() { canvas.requestPaint() }
            function onHoveredChanged() { canvas.requestPaint() }
        }
    }

    background: Rectangle {
        width: control.width
        height: control.height
        border.width: 4
        border.color: control.pressed || control.hovered ? "#31A8FF" : "#0D2D47"
        radius: 8
    }
}
