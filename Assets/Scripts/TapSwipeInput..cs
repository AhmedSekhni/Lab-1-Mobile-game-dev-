using UnityEngine;
using UnityEngine.InputSystem.EnhancedTouch;
using Touch = UnityEngine.InputSystem.EnhancedTouch.Touch;
using TouchPhase = UnityEngine.InputSystem.TouchPhase;

public class TapSwipeInput : MonoBehaviour
{
    [Header("Thresholds (tune on-device)")]
    public float swipeDp = 50f;    
    public float tapMax = 0.3f;     
    public float dragSlopDp = 20f;  

    [Header("Verb target")]
    public PlayerVerb verb;

    private bool _pastSlop;

    void OnEnable() => EnhancedTouchSupport.Enable();
    void OnDisable() => EnhancedTouchSupport.Disable();

    void Update()
    {
        float dpToPx = Mathf.Max(Screen.dpi, 160f) / 160f;
        float swipePx = swipeDp * dpToPx;
        float slopPx = dragSlopDp * dpToPx;

        foreach (var t in Touch.activeTouches)
        {
            Vector2 d = t.screenPosition - t.startScreenPosition;

            // Track drag movement (for aiming/joystick-style input if needed)
            if (t.phase == TouchPhase.Moved)
            {
                if (d.magnitude >= slopPx)
                {
                    _pastSlop = true;
                    // Per-frame drag delta available here: t.delta
                }
            }

            if (t.phase != TouchPhase.Ended) continue;

            if (d.magnitude >= swipePx)
            {
                Vector2 dir = d.normalized;
                Debug.Log("Swipe " + dir);
                if (verb != null) verb.Dash(dir);
            }
            else if (t.time - t.startTime < tapMax && !_pastSlop)
            {
                Debug.Log("Tap");
                if (verb != null) verb.Jump();
            }

            _pastSlop = false;
        }
    }
}