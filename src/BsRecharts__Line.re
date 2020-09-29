// http://recharts.org/en-US/api/Line

[@bs.module "recharts"] [@react.component]
external make:
  (
    ~_type: [
              | `basis
              | `basisClosed
              | `basisOpen
              | `linear
              | `linearClosed
              | `natural
              | `monotoneX
              | `monotoneY
              | `monotone
              | `step
              | `stepBefore
              | `stepAfter
            ]
              =?,
    ~activeDot: 'activeDot=?,
    ~animationBegin: int=?,
    ~animationDuration: int=?,
    ~animationEasing: [@bs.string] [
                        | `ease
                        | [@bs.as "ease-in"] `easeIn
                        | [@bs.as "ease-out"] `easeOut
                        | [@bs.as "ease-in-out"] `easeInOut
                        | `linear
                      ]
                        =?,
    ~className: string=?,
    ~connectNulls: bool=?,
    ~dataKey: 'dataKey,
    ~dot: 'dot=?,
    ~id: string=?,
    ~isAnimationActive: bool=?,
    ~label: 'label=?,
    ~layout: [ | `horizontal | `vertical]=?,
    ~legendType: [
                   | `line
                   | `square
                   | `rect
                   | `circle
                   | `cross
                   | `diamond
                   | `square
                   | `star
                   | `triangle
                   | `wye
                 ]
                   =?,
    ~name: string=?,
    ~onClick: (Js.Nullable.t(Js.t({..})), ReactEvent.Mouse.t) => unit=?,
    ~onMouseDown: (Js.Nullable.t(Js.t({..})), ReactEvent.Mouse.t) => unit=?,
    ~onMouseEnter: (Js.Nullable.t(Js.t({..})), ReactEvent.Mouse.t) => unit=?,
    ~onMouseLeave: (Js.t({..}), ReactEvent.Mouse.t) => unit=?,
    ~onMouseMove: (Js.Nullable.t(Js.t({..})), ReactEvent.Mouse.t) => unit=?,
    ~onMouseOut: (Js.Nullable.t(Js.t({..})), ReactEvent.Mouse.t) => unit=?,
    ~onMouseOver: (Js.Nullable.t(Js.t({..})), ReactEvent.Mouse.t) => unit=?,
    ~onMouseUp: (Js.Nullable.t(Js.t({..})), ReactEvent.Mouse.t) => unit=?,
    ~points: array(Js.t({..}))=?,
    ~stroke: string=?,
    ~strokeWidth: int=?,
    ~unit: string=?,
    ~xAxisId: string=?,
    ~yAxisId: string=?
  ) =>
  React.element =
  "Line";

module Jsx2 = {
  let component = ReasonReact.statelessComponent(__MODULE__);

  let make =
      (
        ~_type=?,
        ~activeDot=?,
        ~animationBegin=?,
        ~animationDuration=?,
        ~animationEasing=?,
        ~className=?,
        ~connectNulls=?,
        ~dataKey,
        ~dot=?,
        ~id=?,
        ~isAnimationActive=?,
        ~label=?,
        ~layout=?,
        ~legendType=?,
        ~name=?,
        ~onClick=?,
        ~onMouseDown=?,
        ~onMouseEnter=?,
        ~onMouseLeave=?,
        ~onMouseMove=?,
        ~onMouseOut=?,
        ~onMouseOver=?,
        ~onMouseUp=?,
        ~points=?,
        ~stroke=?,
        ~strokeWidth=?,
        ~unit=?,
        ~xAxisId=?,
        ~yAxisId=?,
        children,
      ) =>
    ReasonReactCompat.wrapReactForReasonReact(
      make,
      makeProps(
        ~_type?,
        ~activeDot?,
        ~animationBegin?,
        ~animationDuration?,
        ~animationEasing?,
        ~className?,
        ~connectNulls?,
        ~dataKey,
        ~dot?,
        ~id?,
        ~isAnimationActive?,
        ~label?,
        ~layout?,
        ~legendType?,
        ~name?,
        ~onClick?,
        ~onMouseDown?,
        ~onMouseEnter?,
        ~onMouseLeave?,
        ~onMouseMove?,
        ~onMouseOut?,
        ~onMouseOver?,
        ~onMouseUp?,
        ~points?,
        ~stroke?,
        ~strokeWidth?,
        ~unit?,
        ~xAxisId?,
        ~yAxisId?,
        (),
      ),
      children,
    );
};
