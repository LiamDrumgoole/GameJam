using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Attack : MonoBehaviour
{
	public int moveSpeed;
	private Rigidbody _rb;
	public Transform transform1;

	private void Start()
	{
		_rb = GetComponent<Rigidbody>();
	}

	private void Update()
    {
	    if (Input.GetKey(KeyCode.A))
	    {
		    transform.position -= new Vector3(moveSpeed * 0.01f, 0, 0);
	    }
	    if (Input.GetKey(KeyCode.D))
	    {
		    transform.position += new Vector3(moveSpeed * .01f, 0, 0);
	    }

	    if (Input.GetKeyDown(KeyCode.Space))
	    {
		    _rb.AddForce(Vector3.up * 500);
	    }
	    
       // if(Input.GetMouseButtonDown(0))
       // {
	   //     transform1.transform.localPosition = Vector3.Slerp(transform1.localPosition, new Vector3(1, 0, 1), 0.01f);
       // }
       
       
    }
    
    
}
